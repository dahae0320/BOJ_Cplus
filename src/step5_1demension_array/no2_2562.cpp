#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cin.tie(NULL);
	int *list = new int[9];
	for(int i = 0; i < 9; i++) {
		cin >> list[i]; 
	}
	int max = list[0];	// 최대값 초기화
	int max_index = 0;
	for(int i = 1; i<9; i++) {
		if (max < list[i]) {
			max = list[i];
			max_index = i;
		}
	}
	cout << max << "\n";
	cout << max_index+1 << "\n";
	return 0;
}