// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
// 	int N, cnt, index, group_word = 0;
// 	cin >> N;	// 입력하는 문자열의 수
	
// 	for (int k = 0; k < N; k++) {
// 		int* used = new int[N];
// 		string str;
// 		cin >> str;
// 		cnt = index = 0;
// 		for (int j = 0; j < str.length(); j++) {
// 			used[cnt] = str[index];	// 처음 문자 카운트
// 			do {
// 				index++;
// 				if ((index-1) == str.length()) break;
// 				cout << index << "\n";
// 			} while(str[index] == str[index-1]);	// 같은 문자가 연속으로 나오는지 확인
// 			int i = 0;
// 			for ( ; used[i] != str[index]; i++);	// 연속이 종료되면, 이전에 나왔던 문자인지 확인
// 			if (used[i] == str[index]) break;	// 중복이 된다면 해당 문자열 탐색 종료
// 			else if (used[i] != str[index] || index == str.length()) group_word++;
// 			cnt++;
// 		}
// 	}
// 	cout << group_word << "\n";
// }