#include <iostream>
using namespace std;
int main() {
	int X, n = 0, result = 0;
	int up, down; // 분자, 분모
	cin >> X;	// X번째 분수를 찾으려고 한다.
	do {
		n++;
		result += n;
	} while (result < X); // X값이 result보다 커질 때까지 반복
	
	if ( n % 2 == 1 ) {	// n이 홀수
		up = 0; down = n+1;
		int back_track_cnt = result-X;
		for (int i = 0; i <= back_track_cnt; i++) {
			up++;
			down--;
		}
	}
	else if ( n % 2 == 0 ) {
		up = n+1; down = 0;
		int back_track_cnt = result-X;
		for (int i = 0; i <= back_track_cnt; i++) {
			up--;
			down++;
		}
	}
	cout << up << "/" << down << "\n";
}