#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, data, max, min;
	cin >> N;
	int *list = new int[N];
	
	for (int i = 0; i < N; i++) {
		cin >> data;
		list[i] = data;
	}
	
	// 최소값, 최대값 임의로 지정 (첫번째 요소)
	min = list[0];
	max = list[0];
	for(int i = 0; i < N; i++) {
		if (list[i] < min){ min = list[i]; }
		if (list[i] > max){ max = list[i]; }
	}
	cout << min << " " << max << "\n";
}