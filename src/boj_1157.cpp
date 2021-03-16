#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string str;
	int* alpha = new int[26];
	int s;
	cin >> str;
	
	for (int i = 0; i < str.size(); i++) {
		s = (int)str[i];
		if ( s <= 90 ) alpha[s-65]++ ;	// 대문자
		else if ( s >= 97 ) alpha[s-97]++;	// 소문자
	}
	
	int max = alpha[0], max_index = 0;
	bool same = false;
	for ( int i = 1; i < 26; i++) {
		if ( alpha[i] == max ) {
			same = true;
		}
		else if ( alpha[i] > max ) {
			max = alpha[i];
			max_index = i;
			same = false;
		}
	}
	
	if ( same ) cout << "?" << "\n";
	else cout << (char)(max_index + 65) << "\n";
}