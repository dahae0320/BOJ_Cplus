#include <iostream>
#include <string>
using namespace std;

static void strPrint(string str) {
	for ( int i = str.length(); i > 0; i-- ) {
		cout << str[i-1];
	}
	cout << "\n";
}

int main() {
	string A, B;
	cin >> A >> B;
	for (int k = A.length(); k > 0; k--) {
		if ( A[k-1] > B[k-1] ) {
			strPrint(A);
			break;
		} else if ( A[k-1] < B[k-1] ) {
			strPrint(B);
			break;
		} else { continue; }
	}
	return 0;
}