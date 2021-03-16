#include <iostream>
using namespace std;

struct LinkedListNode {
	int data;
	LinkedListNode *link;
};

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int A, B, result;
	
	LinkedListNode *head = NULL;
	LinkedListNode *tail = NULL;
	LinkedListNode *cur = NULL;
	LinkedListNode *newNode = NULL;
	
	while(cin >> A >> B) {	// 데이터 입력
		result = A + B;
		newNode = new LinkedListNode();
		newNode->data = result;
		newNode->link = NULL;
		if (head == NULL)
			head = newNode;
		else
			tail->link = newNode;
		tail = newNode;
	}
	
	if (head == NULL){ // 데이터 출력
		return 0;
	}
	else {
		cur = head;
		while(cur != NULL){
			printf("%d \n", cur->data);
			cur = cur->link;
		}
	}
	return 0;
}