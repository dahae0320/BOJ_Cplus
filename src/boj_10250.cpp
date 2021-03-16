#include <iostream>
using namespace std;
int main() {
	int T, H, W, N;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		int layer = N%H;
		int num = N/H;
		if ( layer == 0 ) layer = H;	// 나머지값에 따라 조건 달라짐
		else num = num + 1;
		if ( num < 10 ) cout << layer << "0" << num << "\n";	// num값이 한자리 수일 경우, 십의자리 0과 같이 출력
		else cout << layer << num << "\n";
	}
	return 0;
}