class DblList;	// 전방 선언

class DblListNode {
	friend class DblList;
	private:
		int data;
		DblListNode* left, right;
};

class DblList {
	public:
		// 리스트 조작 연산들
		...
		void Delete(DblListNode *x);
		void Insert(DblListNode *p, DblListNode *x);
	private:
		DblListNode* first;	// 헤더 노드를 가리킨다.
}

void DblList::Delete(DblListNode * x)
{
	if ( x == first ) throw "Deletion of header node not permitted";
	else {
		x->left->right = x->right;
		x->right->left = x->left;
	}
}

void DblList::Insert(DblListNode *p, DblListNode *x)
{
	p->left = x;
	p->right = x->right;
	x->right->left = p;
	x->right = p;
}