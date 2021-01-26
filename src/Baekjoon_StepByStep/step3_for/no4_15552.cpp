// cin, cout을 이용한 빠른 입출력
#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int num, A, B;
	
	cin >> num;
	int *arr = new int[num];
	
	for(int i=0; i < num; i++){
		cin >> A >> B;
		arr[i] = A + B;
	}
	for(int i=0; i < num; i++){
		cout << arr[i] << "\n";
	}
	
	return 0;
}