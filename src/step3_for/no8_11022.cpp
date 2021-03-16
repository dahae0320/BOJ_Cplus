#include <stdio.h>

int main() {
	struct PlusElments {
		int A, B;
		int result;
	};
	
	int num;
	scanf("%d", &num);	// 테스트케이스 개수
	PlusElments *testcase =  new PlusElments[num];
	
	for(int i = 0; i < num; i++){
		scanf("%d %d", &testcase[i].A, &testcase[i].B);
		testcase[i].result = testcase[i].A + testcase[i].B;
	}
	for(int i = 0; i < num; i++){
		printf("Case #%d: %d + %d = %d\n", i+1, testcase[i].A, testcase[i].B, testcase[i].result);
	}
	
	return 0;
}