#include<iostream>
#include<vector>
using namespace std;

long long sum(vector<int> &a) {
	long long sum = 0;
	for(int i = 0; i < a.size(); i++) {
		sum += a[i];
	}
	return sum;
}
// 답으로 제출한 코드
// #include <vector>
// long long sum(std::vector<int> &a) {
// 	long long ans = 0;
//     for(int i = 0; i < a.size(); i++) {
// 		ans += a[i];
// 	}
// 	return ans;
// }

int main() {
	int n;
	cin >> n;
	vector<int> v;
	
	for(int i = 1; i <= n; i++) {
		v.push_back(i);
	}
	
	long long result = sum(v);
	cout << result << "\n";
}