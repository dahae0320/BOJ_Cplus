// #include <iostream>
// using namespace std;
// int main() {
// 	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// 	int A, B, C, cnt = 1;
// 	cin >> A >> B >> C;
	
// 	// A + B*cnt < C*cnt 이 되는 첫번째 cnt가 최초로 이익이 발생하는 판매량(손익 분기점)이다.
// 	if ( (C-B) > 0 ) {
// 		for ( ; A >= (C-B)*cnt; cnt++);	// A < (C-B)*cnt가 처음 될때까지 반복
// 		cout << cnt << "\n";
// 		return 0;
// 	}
// 	else cout << -1 << "\n";
// 	return 0;
// }

#include <stdio.h>
int main() {
	int A, B, C, cnt = 1;
	scanf("%d %d %d", &A, &B, &C);
	if ( (C-B) <= 0 ) printf("-1");
	else {
		int k = A/(C-B);
		for ( ; k >= cnt; cnt++);	// A < (C-B)*cnt가 처음 될때까지 반복
		printf("%d", cnt);
	}
	return 0;
}