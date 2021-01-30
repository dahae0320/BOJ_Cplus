#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cin.tie(NULL);
	int C;	// 테스트 케이스 수
	cin >> C;
	for (int i = 0; i < C; i++) {
		int std_num;	// 학생 수
		cin >> std_num;
		int *score = new int[std_num];	// 학생들의 점수
		int sum = 0, avg = 0, cnt = 0;	// 점수 합, 평균, 평균이 넘는 학생들 카운트
		for (int j = 0; j < std_num; j++) {
			cin >> score[j];
			sum += score[j];
		}
		avg = sum / std_num;
		for (int j = 0; j < std_num; j++) {
			if ( score[j] > avg ) { cnt++; }
		}
		double ratio = ( cnt / (double)std_num ) * 100;	// 평균이 넘은 학생들의 전체에 대한 비율
		cout << fixed;
		cout.precision(3);	// 출력 숫자 고정 (fixed를 해주면 소수점갯수 고정으로 바뀐다.)
		cout << ratio << "% \n";
	}
	return 0;
}