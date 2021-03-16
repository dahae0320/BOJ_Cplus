#include <iostream>
using namespace std;

// 배열을 이용한 스택, 템플릿 사용하지 않고 정수로 진행
class ArrayStack {
	public:
		ArrayStack(int stackCapacity = 10);
		bool IsEmpty() const;
		bool IsFull() const;
		int Top() const;
		void Push(const int item);
		void Pop();
	private:
		int *stack;
		int top;
		int capacity;
}

ArrayStack::ArrayStack(int stackCapacity) :capacity (stackCapacity) 	// 생성자
{	
	if (capacity < 1) throw "Stack capacity must be >0";
	stack = new int[capacity];
	top = -1;
}
bool ArrayStack::IsEmpty() const { return top == -1; }
bool ArrayStack::IsFull() const { return top == capacity-1; }
int ArrayStack::Top() const 
{ 
	if ( IsEmpty() ) throw "Stack is empty.";
	return stack[top]; 
}
void ArrayStack::Push(const int item) 
{
	if ( IsFull() ) throw "Stack is full.";
	stack[++top] = item;
}
int ArrayStack::Pop() 
{
	if ( IsEmpty() ) throw "Stack is empty. Can not delete.";
	return stack[top--];
}



