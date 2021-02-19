#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double A, B, V, days;
	cin >> A >> B >> V;
	days = (V-B) / (A-B);
	cout << ceil(days) << "\n";
}