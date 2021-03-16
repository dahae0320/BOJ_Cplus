#include<iostream>
#include<string>
using namespace std;
int main() {
	int A, B, C, result_index = 0;
	int* num_count = new int[10]; // 인덱스 값 -> 0~9 숫자 의미
	int* num_list = new int[30]; // result 값의 자릿수를 거꾸로 저장 (ex. 1452 -> 2,5,4,1)
	cin >> A >> B >> C;
	int result = A * B * C;

	while (result != 0) {
		num_list[result_index] = result - (result / 10 * 10); // ex. 1452 - 145*10 = 2, 145 - 14*10 = 5 ...
		result = result / 10;
		result_index++;
	}
	
	for (int i = 0; i < result_index; i++) {
		switch ( num_list[i] ) {
		case 0:
			num_count[0]++;
			break;
		case 1:
			num_count[1]++;
			break;
		case 2:
			num_count[2]++;
			break;
		case 3:
			num_count[3]++;
			break;
		case 4:
			num_count[4]++;
			break;
		case 5:
			num_count[5]++;
			break;
		case 6:
			num_count[6]++;
			break;
		case 7:
			num_count[7]++;
			break;
		case 8:
			num_count[8]++;
			break;
		case 9:
			num_count[9]++;
			break;
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << num_count[i] << "\n";
	}
	return 0;
}