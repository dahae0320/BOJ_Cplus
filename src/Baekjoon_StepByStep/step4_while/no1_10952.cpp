#include <iostream>
using namespace std;

struct LinkedNode {
	int data;
	struct LinkedNode *link;
};

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	LinkedNode *head = NULL;
	LinkedNode *tail = NULL;
	LinkedNode *cur = NULL;
	LinkedNode *newNode = NULL;
	int A, B, result;
	
	while(1){	// 데이터 입력
		cin >> A >> B;
		if(A == 0 && B==0)
			break;
		result = A + B;
		newNode = new LinkedNode();
		newNode->data = result;
		newNode->link = NULL;
		
		if (head == NULL) {	// 연결리스트가 비어있을 때
			head = newNode;
		}
		else {
			tail->link = newNode;
		}
		tail = newNode;
	}
	
	if(head == NULL) {	// 데이터 출력
		return 0;
	}
	else {
		cur = head;
		while(cur != NULL) {
			cout << cur->data << "\n";
			cur = cur->link;
		}
	}
	
	return 0;
}