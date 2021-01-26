
ChainNode* CircularList::GetNode()	// 사용할 노드를 생성한다.
{
	ChainNode* x;
	if (av) {
		x = av;
		av = av->link;
	}
	else x = new ChainNode;
	return x;
}

void CircularList::RetNode(ChainNode* node)	// x가 가리키는 노드를 반환한다.
{
	node->link = av;
	av = node;
	node = 0;
}

void CircularList::~CircularList()	// 원형 리스트 삭제
{
	if (last) {
		ChainNode* first = last->link;
		last->link = av;
		av = first;
		last = 0;
	}
}