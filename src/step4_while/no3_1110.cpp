#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, cnt=0, result = 0, data;
	
	cin >> N;
	if(N<0 || N>99) return 0;	// 0<= 입력값 <= 99 (조건)
	data = N;
	do {
		int modified_data;	// 수정된 데이터 (자리수를 더한 결과값)
		int units, tens, md_units;	// data의 일의자리, 십의자리 / modified_data의 일의자리
		if(data < 10) {	// 한자리수일 경우 십의 자리에 0을 붙인다.
			tens = 0;
		}
		else {	// 두자릿수일 경우 십의자리 그대로 units에 넣는다.
			tens = data / 10;
		}
		units = data - tens*10;
		modified_data = tens + units; // data의 십의자리 + 일의자리
		md_units = modified_data - (modified_data/10)*10;
		
		result = units*10 + md_units;
		data = result;
		cnt++;
	}while (N != result);
	cout << cnt << "\n";
	return 0;
}