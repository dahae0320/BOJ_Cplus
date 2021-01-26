#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
	int num, A, B;
	
	scanf("%d", &num);
	int *arry = new int[num];
	
	for(int i =0; i < num; i++){
		cin >> A >> B;
		arry[i] = A+B;
	}
	for(int i =0; i < num; i++){
		printf("%d \n", arry[i]);
	}
	delete []arry;
	
	return 0;
}