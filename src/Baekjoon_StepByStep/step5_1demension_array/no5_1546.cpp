#include <iostream>
using namespace std;
int main() {
	// ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, M; // 과목 갯수, 최고 점수
	float result = 0;
	cin >> N;
	float *score = new float [N];	// 과목 당 점수

	cin >> score[0];
	M = score[0];	// 임의로 첫번째 점수를 M으로 둔다.
	for (int index = 1; index < N; index++) {	// 점수 입력, 최대 점수(M) 구하기
		cin >> score[index];
		if (score[index] > M) M = score[index];
	}
	for (int i = 0; i < N; i++) {
		score[i] = score[i] / M * 100;
		result += score[i];
	}
	cout << fixed;
	cout.precision(4);
	cout << result / N << "\n";
	return 0;
}