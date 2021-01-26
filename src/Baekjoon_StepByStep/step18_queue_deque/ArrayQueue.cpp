#include <iostream>
using namespace std;

class ArrayQueue 	// 0개 이상의 원소를 가지는 유한 순서 리스트
{	
	public:
		Queue(int queueCapacity = 10);	// 처음에 크기가 queueCapacity인 공백 큐 생성
		bool IsEmpty() const;		// 큐의 원소수가 0이면 true, 아니면 false를 반환
		bool IsFull() const;	// 큐가 포화상태이면 true, 아니면 false를 반환
		int Front() const;		// 큐의 앞에 있는 원소를 반환
		int Rear() const;		// 큐의 뒤에 있는 원소를 반환
		void enqueue(const int item);	// 큐의 뒤(rear)에 item을 삽입
		int dequeue();		// 큐의 앞(front) 원소를 삭제
	private:
		int *queue;		// 큐 원소를 위한 배열
		int front;	// 첫번째 원소로부터 반시계 방향으로 한 위치 뒤
		int rear;	// 마지막 원소의 위치
		int capacity;	// 큐 배열의 크기
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	return 0;
}