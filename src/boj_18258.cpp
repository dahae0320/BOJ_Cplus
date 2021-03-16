#include <iostream>
using namespace std;

class Queue
{
	public:
		Queue(int queueCapacity = 10);
		bool IsEmpty() const;
		bool IsFull() const;
		int Front() const;
		int Back() const;	// Rear()
		void Push(const int item);	// enqueue(const int item)
		int Pop();	// dequeue()
		int Size() const;	// 큐에 들어 있는 정수의 갯수, capacity와는 다르다.
	private:
		int *queue;
		int front, back, capacity;
};

Queue::Queue(int queueCapacity):capacity(queueCapacity) 	// 생성자
{
	if ( capacity < 1 ) throw "Queue capacity must be >0";
	queue = new int[capacity];
	front = back = 0;
}
bool Queue::IsEmpty() const { return front == back; }
bool Queue::IsFull() const { return front == (back+1) % capacity; }
int Queue::Front() const
{
	if ( IsEmpty() ) return -1;
	return queue[(front+1)%capacity];
}
int Queue::Back() const
{
	if ( IsEmpty() ) return -1;
	return queue[back];
}
void Queue::Push(const int item)
{
	if ( IsFull() ) throw "Queue is full. Can not insert.";
	back = (back + 1) % capacity;
	queue[back] = item;
}
int Queue::Pop()
{
	if ( IsEmpty() ) { return -1; }
	front = (front + 1) % capacity;
	return queue[front];
}
int Queue::Size() const
{
	if ( front > back ) {
		return ( (capacity - 1) - front ) + ( back + 1 );
	}
	else {
		return back - front;
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N;
	cin >> N;
	Queue queue(N);
	for(int i = 0; i < N; i++) {
		string command;
		cin >> command;
		if ( command == "push" ) {
			int x;
			cin >> x;
			queue.Push(x);
		}
		else if ( command == "pop" ) {
			cout << queue.Pop() << "\n";
		}
		else if ( command == "size" ) {
			cout << queue.Size() << "\n";
		}
		else if ( command == "empty" ) {
			if ( queue.IsEmpty() ) { cout << 1 << "\n"; }
			else { cout << 0 << "\n"; }
		}
		else if ( command == "front" ) {
			cout << queue.Front() << "\n";
		}
		else if ( command == "back" ) {
			cout << queue.Back() << "\n";
		}
	}
	return 0;
}