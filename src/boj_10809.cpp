#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	cin >> str;
	int* alphabet = new int[26];
	
	for (int i = 0; i < 26; i++) {
		int index = str.find((char)(97+i));
		cout << index << " ";
	}
	
	return 0;
}