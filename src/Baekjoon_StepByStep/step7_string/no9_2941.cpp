#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int cnt = 0;
	cin >> str;
	
	for (int k = 0; k < str.length(); k++) {
		cnt++;
		if ( str[k] == '=' ) {
			cnt--;
			if ( (k-1 != 0) && (str[k-1] == 'z') && (str[k-2] == 'd') ) cnt--;
		} 
		else if ( str[k] == '-' ) {
			cnt--;
		} 
		else if ( (str[k] == 'j') && ( (str[k-1] == 'l') || (str[k-1] == 'n') ) ) {
			cnt--;
		}
	}
	cout << cnt << "\n";
	
	return 0;
}