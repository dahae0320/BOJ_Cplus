#include <iostream>
using namespace std;
int main() {
	int N, K, sum = 0, cnt = 0;
	cin >> N >> K;
	int order = N-1;
	int* value = new int[N];
	
	for (int i=0; i < N; i++) cin >> value[i];
	
	while ( sum != K ) {
		sum += value[order]; cnt++;
		if ( sum > K ) {
			sum -= value[order];
			order--; cnt--;
		}
	}
	cout << cnt << "\n";
	return 0;
}