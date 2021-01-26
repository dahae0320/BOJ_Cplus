#include <iostream>
using namespace std;

int main() {
	int H, M;
	int H1, M1;
	cin >> H >> M;

	H1 = H;
	M1 = M + (-45);
	if (M1 < 0) {
		M1 = 60 + M1;
		--H1;
		if (H1 < 0) H1 = 24 + H1;
	}
	
	cout << H1 << " "<< M1 << endl;
}