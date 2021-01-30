#include <iostream>
using namespace std;

// ----------------------------------------Chain HAS-A ChainNode-----------------
class Chain;	// 전방 선언
class ChainNode {
	friend class Chain;
	private:
		int data;
		ChainNode *link;
	public:
		ChainNode(int element = 0; ChainNode* next = 0)	{ 
			data = element; 
			link = next;
		}
};
class Chain {
	public:	// 리스트 조작 연산
		void Create(int item); 	
		void Insert(ChainNode* node);
		void Delete(ChainNode* node, ChainNode* pre);
	private:
		ChainNode *first;	// 첫 번째 노드를 지시하는 접근 포인터
};

// --------------------------------------------ChainNode-----------------------------
class Node {
	private:
		int data;
		Node *link;
	public:
		// 리스트 조작 연산
};

// --------------------------리스트 조작 연산------------------------------------------
void Chain::Create(int item) 
{
	first = new ChainNode(item, 0);
}
void Chain::Insert(ChainNode *node, int item)
{
	if (first) // node 다음에 삽입
		node->link = new ChainNode(item, node->link);
	else	// 공백 리스트에 삽입
		first = new ChainNode(item);
}
void Chain::Delete(ChainNode* node, ChainNode* pre)
{
	if ( node == first ) first = first->link;
	else pre->link = node->link;
	delete node;
}
