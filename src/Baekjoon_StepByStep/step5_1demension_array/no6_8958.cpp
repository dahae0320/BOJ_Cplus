#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N; // 테스트 케이스 갯수
	string ox;
	
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> ox;
		int result = 0, cnt = 0;
		for (int index = 0; index < ox.length(); index++ ){
			if ( ox[index] == 'O' ) {
				++cnt;
				result += cnt;
			}
			else if ( ox[index] == 'X' ) {
				cnt = 0;	// 1횟수 카운트 초기화
			}
		}
		cout << result << "\n";
		result = 0;
	}
	return 0;
}