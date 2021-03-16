#include <iostream>
using namespace std;
int main() {
	int N, M, K, team, sum;
	cin >> N >> M >> K;
	int allSum = N+M;

	if ( N/2 - M <= 0 ) team = N/2;
	else team = M;
	sum = team * 3;

	while ( (allSum - sum) < K ) {
		team--;
		sum = team * 3;
	}
	cout << team << "\n";
}