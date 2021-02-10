#include <iostream>
using namespace std;
int main() {
	int N, sum;
	cin >> N;
	int *P = new int[N];
	int *list = new int[N];
	for (int i=0; i < N; i++) cin >> P[i];
	
	for (int i=0; i < N-1; i++) {
		for (int j=i+1; j < N; j++) {
			if ( P[i] > P[j] ) {	// 오름차순 정렬
				int temp = P[i];
				P[i] = P[j];
				P[j] = temp;
			}
		}
	}
	
	list[0] = sum = P[0];
	for (int i=1; i < N; i++) {
		list[i] = list[i-1] + P[i];
		sum += list[i];
	}
	cout << sum << "\n";
	return 0;
}