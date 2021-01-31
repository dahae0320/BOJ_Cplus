#include <iostream>
using namespace std;
int main() {
	int N, result;
	cin >> N;
	
	if (N < 100) result = N;
	else if (N <= 1000) {
		result = 99;
		int first, second, third;
		for (int i = 100; i <= N; i++) {
			if ( i == 1000 ) break;
			first = i/100;
			second = (i%100)/10;
			third = (i%100)%10;
			if (first - second == second - third) result++;
		}
	}

	cout << result << "\n";
}