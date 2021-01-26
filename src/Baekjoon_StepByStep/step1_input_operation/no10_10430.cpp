#include <iostream>
using namespace std;

int main(){
	int A, B, C;
	cin >> A >> B >> C;
	if ((A < 2) || (A > 10000) || (B < 2) || (B > 10000) || (C < 2) || (C > 10000)) throw "입력값은 2이상 10000이하 이어야 합니다.";
	
	cout << (A+B)%C << endl;
	cout << ((A%C) + (B%C))%C << endl;
	cout << (A*B)%C << endl;
	cout << ((A%C) * (B%C))%C << endl;
	
	return 0;
}