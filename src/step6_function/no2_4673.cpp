#include <iostream>
using namespace std;
int main() { 
	bool* self = new bool[10000];
	for (int i = 0; i < 10000; i++) {
		if (i < 10) {
			self[i+i] = true;
		}
		else if (i < 100) {
			self[i + i%10 + i/10] = true;
		}
		else if (i < 1000) {
			self[i + i/100 + (i%100)/10 + (i%100)%10] = true;
		}
		else if (i < 10000) {
			int index = i + (i/1000) + (i%1000)/100 + ((i%1000)%100)/10 + ((i%1000)%100)%10;
			if (index < 10000) self[index] = true;
		}
	}
	for (int k = 0; k < 10000; k++) {
		if (!self[k]) cout << k << "\n";
	}
	return 0;
}