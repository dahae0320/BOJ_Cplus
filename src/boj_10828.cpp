#include <iostream>
#include <string>
using namespace std;

// 배열을 이용한 스택, 템플릿 사용하지 않고 정수로 진행
class ArrayStack {
	public:
		ArrayStack(int stackCapacity = 10);
		bool IsEmpty() const;
		bool IsFull() const;
		int Top() const;
		void Push(const int item);
		int Pop();
		int Size();
	private:
		int *stack;
		int top;
		int capacity;
};

ArrayStack::ArrayStack(int stackCapacity) :capacity (stackCapacity) {	// 생성자
	if (capacity < 1) throw "Stack capacity must be >0";
	stack = new int[capacity];
	top = -1;
}
bool ArrayStack::IsEmpty() const { return top == -1; }
bool ArrayStack::IsFull() const { return top == capacity-1; }
int ArrayStack::Top() const { 
	if ( IsEmpty() ) return -1;
	return stack[top]; 
}
void ArrayStack::Push(const int item) {
	if ( IsFull() ) throw "Stack is full.";
	stack[++top] = item;
}
int ArrayStack::Pop() {
	if ( IsEmpty() ) return -1;
	return stack[top--];
}
int ArrayStack::Size() {
	return top+1;
}

int main () {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N;
	cin >> N;
	ArrayStack stack(N);	// 스택 객체 생성
	for (int i = 0; i < N; i++) {
		string instructor;
		cin >> instructor;
		if (instructor == "push") {
			int num;
			cin >> num;
			stack.Push(num);
		} else if ( instructor == "pop") {
			cout << stack.Pop() << "\n";
		} else if ( instructor == "size") {
			cout << stack.Size() << "\n";
		} else if ( instructor == "empty") {
			if (stack.IsEmpty()) cout << 1 << "\n";
			else cout << 0 << "\n";
		} else if ( instructor == "top") {
			cout << stack.Top() << "\n";
		}
	}
}

