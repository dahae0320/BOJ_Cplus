#include <iostream>
using namespace std;
	
static int factorial(int element);

int main() {
	int N, result;
	cin >> N;

	result = factorial(N);
	cout << result << "\n";
}

static int factorial(int element) {
	if (element <= 1) return 1;
	return( element*factorial(element-1) );
}