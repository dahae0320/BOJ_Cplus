#include <iostream>
using namespace std;
int main() {
	int N;
	long long sum=0, min=1000000000;
	cin >> N;
	int *dist = new int[N-1];
	int *price = new int[N];
	for (int i = 0; i < N-1; i++) cin >> dist[i];

	for(int i=0; i < N; i++) {
		cin >> price[i];
		if ( min > price[i] && i != N-1 ) {	// 마지막 주유소는 계산에서 제외
			min = price[i];
		}
		sum += min*dist[i];
	}	
	
	cout << sum << "\n";
}