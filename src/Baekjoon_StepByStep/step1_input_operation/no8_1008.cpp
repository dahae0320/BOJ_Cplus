#include <iostream>
using namespace std;

int main() {
	int A, B;
	double result;
	cin >> A >> B;
	result = double(A) / double(B);
	
	cout<<fixed;
	cout.precision(12);
	cout << result << endl;
	
	return 0;
}