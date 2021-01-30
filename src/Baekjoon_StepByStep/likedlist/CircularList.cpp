class CircularList;	// 전방 선언

class ChainNode {
	friend class CircularList;
	private:
		int data;
		ChainNode *link;
	public:
		ChainNode(int element = 0; ChainNode* next = 0)	{ 
			data = element; 
			link = next;
		}
};

class CircularList {
	public:
		// 원형 연결 리스트 조작 연산 (삽입, 삭제 등등)
		...
		void InsertFront(const T& e);
	private:
		CircularList* last;	// 마지막 노드를 가리키는 접근 포인터(전용 데이터 멤버)
}

void CircularList::InsertFront(const T& e) 
{	
	// last는 이 리스트의 마지막 노드를 가리킨다.
	ChainNode *newNode = new ChainNode(e);
	if(last) { // 공백이 아닌 리스트
		newNode->link = last->link;
		last->link = newNode;
	}
	else {	// 공백 리스트
		last = newNode;
		newNode->link = newNode;
	}
}