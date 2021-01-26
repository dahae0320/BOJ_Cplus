#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int N, X;
	cin >> N >> X;
	int *numList = new int[N];
	int *smallList = new int[N];
	for(int i=0; i < N; i++){
		cin >> numList[i];
		if (numList[i] < X) {
			smallList[i] = numList[i];
		}
	}
	for(int i=0; i < N; i++){
		if (smallList[i] != 0) cout << smallList[i] << " ";
	}
}