// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
// 	string str;
// 	int index = 0, cnt = 0;
// 	getline(cin, str);	// 공백문자까지 입력받기
// 	cout << str.length() << "\n";
// 	while (index < str.length()) {
// 		for ( ; str[index] != ' '; index++);	// 공백 단위로 단어를 구분한다.
// 		cnt++;
// 		index++;
// 	}

// 	if (str[0] == ' ') cnt--;	// 문장의 첫글자에 공백이 오면 count값을 1감소한다.

// 	cout << cnt << "\n";
// 	return 0;
// }
// // 다시 할 것

#include <iostream>
#include <string>
using namespace std;
int main() {
	string str; int count = 0;
	// cin >> str;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') count++;
	}
	count++;
	if (str[0] == ' ') count--;
	if (str[str.length()-1] == ' ') count--;
	
	cout << count << "\n";
	return 0;	
}