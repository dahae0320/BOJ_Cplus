#include <iostream>
using namespace std;
int main() {
	int N, sum=0, curIndex=0, min=0, minIndex=0, restLength=0;
	cin >> N;
	int roadLength[N-1];
	int oilPrice[N];
	for (int i = 0; i < N-1; i++) cin >> roadLength[i];
	// for (int i = 0; i < N; i++) cin >> oilPrice[i];
	
	// min = oilPrice[0];
	for(int i=0; i < N-2; i++) {	// 마지막 주요소 가격은 제외한다 (영향을 끼치지 못하므로)
		cin >> oilPrice[i];
		
	}	
	
	for (; curIndex < minIndex; curIndex++) sum+= oilPrice[curIndex]*roadLength[curIndex];
	for (int i = curIndex; i < N-1; i++) restLength += roadLength[i];
	sum += oilPrice[minIndex]*restLength;
	
	cout << sum << "\n";
}