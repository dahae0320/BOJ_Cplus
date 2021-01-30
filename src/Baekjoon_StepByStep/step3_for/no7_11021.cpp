#include <stdio.h>

int main() {
	int num, A, B;
	scanf("%d", &num);	// 테스트케이스 개수
	int *arry = new int[num];
	
	for(int i = 0; i < num; i++){
		scanf("%d %d", &A, &B);
		arry[i] = A + B;
	}
	for(int i = 0; i < num; i++){
		printf("Case #%d: %d\n", i+1, arry[i]);
	}
	
	return 0;
}