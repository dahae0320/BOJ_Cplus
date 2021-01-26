#include <iostream>
#include <string>
using namespace std;
int main() {
	int N, result = 0;
	string num;
	cin >> N;
	cin >> num;
	for (int i = 0; i < N; i++) {
		result += (int)num[i] - 48;	// 아스키코드 0이 48이므로...
	}
	cout << result << "\n";
	return 0;
}