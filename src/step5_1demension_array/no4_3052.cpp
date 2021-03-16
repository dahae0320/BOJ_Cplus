#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int *input_data = new int[10];	// 입력 데이터 10개
	int *rest_list = new int[42];	// 나머지 저장, 인덱스 값 == 나머지 값
	int rest_cnt = 0;	// 서로 다른 나머지의 갯수
	
	for (int count = 0; count < 10; count++) {
		cin >> input_data[count];
		int rest = input_data[count] % 42;
		if (rest_list[rest] == 0) rest_cnt++;	// 처음 나온 나머지 값일 경우 cnt증가
		rest_list[rest]++;
	}
	
	cout << rest_cnt << "\n";
	
	return 0;
}