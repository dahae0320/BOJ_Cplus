#include <iostream>
#include <string>
using namespace std;
int main() {
	string number;
	cin >> number;
	int* num = new int[number.length()];
	int result = 0;
	
	for (int i = 0; i < number.length(); i++) {
		// (int)number[i]
		if (number[i] == 'A' || number[i] == 'B' || number[i] == 'C') num[i] = 2;
		else if (number[i] == 'D' || number[i] == 'E' || number[i] == 'F') num[i] = 3;
		else if (number[i] == 'G' || number[i] == 'H' || number[i] == 'I') num[i] = 4;
		else if (number[i] == 'J' || number[i] == 'K' || number[i] == 'L') num[i] = 5;
		else if (number[i] == 'M' || number[i] == 'N' || number[i] == 'O') num[i] = 6;
		else if (number[i] == 'P' || number[i] == 'Q' || number[i] == 'R' || number[i] == 'S') num[i] = 7;
		else if (number[i] == 'T' || number[i] == 'U' || number[i] == 'V') num[i] = 8;
		else if (number[i] == 'W' || number[i] == 'X' || number[i] == 'Y' || number[i] == 'Z') num[i] = 9;
	}
	
	for (int i = 0; i < number.length(); i++) {
		result += num[i] + 1;
	}
	cout << result << "\n";
	return 0;
}