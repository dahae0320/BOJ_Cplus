#include <iostream>
using namespace std;
int main() {
	int N, i, j;
	cin >> N;
	j = 0, i = N / 5;
	int sugar[N][N] = {0};
    
	while( i != -1 ) {
		sugar[i][j] = 5*i + 3*j;
		if ( sugar[i][j] > N ) {
			i--; j=0;
			continue;
		}
		else if ( sugar[i][j] == N ) { 
			break; 
		}
		j++;
	}
    
	if ( i == -1 ) cout << -1 << "\n";
	else cout << i+j << "\n";
}