// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
// 	string max, min, temp;
// 	cin >> max >> min;
// 	int index, rest, share = 0, set;
// 	if ( max.length() < min.length() ) { temp = max; max = min; min = temp; }
// 	int New[max.length()+2];
// 	int size = sizeof(New)/sizeof(New[0]);

// 	for (index = 1; (unsigned)index < min.length()+1; index++) {
// 		set = ((int)max[max.length()-index]-48) + ((int)min[min.length()-index]-48) + share;
// 		rest = set % 10;
// 		share = set / 10;
// 		New[index] = rest;
// 	}
	
// 	if ( max.length() != min.length() ) {
// 		max[max.length()-index] += share; 
// 		for (index = 1; (unsigned)index <= max.length(); index++) {
// 			New[index] = (int)max[max.length()-index]-48;
// 		}
// 		for (int i = 2; i < size; i++) {
// 			cout << New[size-i];
// 		}
// 	}
// 	else {
// 		New[index] = share;
// 		for (int i = 1; i < size; i++) {
// 			cout << New[size-i];
// 		}
// 	}
// 	cout << "\n";
	
// 	return 0;
// }