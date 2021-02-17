#include <iostream>
using namespace std;
// 1. 일반 재귀함수로 풀기
// static int fibo(int k) {
// 	if (k==0) return 0;
// 	if (k==1) return 1;
// 	return fibo(k-1) + fibo(k-2);
// }
// int main() {
// 	int N;
// 	cin >> N;
// 	int result = fibo(N);
// 	cout << result << "\n";
// }

// 2. 동적 프로그래밍 (중복되는 계산값 기억하기)
int main() {
	int N;
	cin >> N;
	int* fibo = new int[N+1]; fibo[0]=0; fibo[1]=1;
	for (int i=2; i <= N; i++) {
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	cout << fibo[N] << "\n";
}