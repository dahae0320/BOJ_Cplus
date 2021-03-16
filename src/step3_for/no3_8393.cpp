#include <iostream>
using namespace std;

int main() {
	int num, result = 0;
	
	cin >> num;
	
	for(int i = 1; i <= num; i++) {
		result = result + i;
	}
	cout << result << "\n";
}