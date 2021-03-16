#include <iostream>
using namespace std;
int  main() {
	long long N, k=0;
	cin >> N;
	
	while( 3*k*(k+1)+1 < N ) { k++; }
	cout << k+1 << "\n";
}