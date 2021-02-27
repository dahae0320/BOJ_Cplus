#include <iostream>
using namespace std;
static int resident(int k, int n, int num[][14]);
int main() {
	int T, k, n;
 	int num[100000][14] = {0};
	cin >> T;
 	for (int cnt = 0; cnt < T; cnt++) {
    cin >> k >> n;
		int res_cnt = resident(k, n, num);
		cout << res_cnt << "\n";
  }
}
static int resident(int k, int n, int num[][14]) {
	if ( k==0 ) return n;
	num[k][n] = 0;
	for (int j = n; j > 0; j--) {
		if ( num[k-1][j] ) {
			num[k][n] += num[k-1][j];
		} else {
			num[k-1][j] = resident(k-1, j, num);
			num[k][n] += num[k-1][j];
		}
	}
	return num[k][n];
}