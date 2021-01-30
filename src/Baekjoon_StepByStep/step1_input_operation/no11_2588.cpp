#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int A, B;
	int b1, b11, b111;
	cin >> A;
	cin >> B;
	
	// b111 = 세번째, b11 = 두번째, b1 = 첫번째 자리 수 (ex. B = 385)
	b111 = int(B * pow(10,-2));	// 3.85 -> 3
	int tmpB = B - b111*100;	// 385 - 300 = 85
	b11 = int(tmpB * pow(10,-1));	// 8.5 -> 8
	tmpB = tmpB - b11*10;		// 85 - 80 = 5
	b1 = tmpB;		// -> 5 
	
	int Ab111 = A * b1;	// A*5 (첫번째자리)
	int Ab11 = A * b11;	// A*8 (두번째자리)
	int Ab1 = A * b111;	// A*3 (세번째자리)
	
	cout << Ab111 << endl;
	cout << Ab11 << endl;
	cout << Ab1 << endl;
	
	int result = Ab111 + Ab11*10 + Ab1*100;
	
	cout << result << endl;
	
	return 0;
}