#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int num;
	cin >> num;
	
	for(int i=0; i < num; i++){
		for(int j=num-(i+1); j > 0; j--){
			cout << " ";
		}
		for(int j=1; j <= i+1; j++){
			cout << "*";
		}
		cout << "\n";
	}
}
