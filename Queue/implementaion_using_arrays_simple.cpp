#include <bits/stdc++.h>
using namespace std;

class Queue
{
	int size, cap;
	int *arr;

public:
	Queue(int c)
	{
		cap = c;
		size = 0;
		arr = new int(cap);
	}
	bool isFull()
	{
		return (size == cap);
	}
	bool isEmpty()
	{
		return (size == 0);
	}
	// Adding
	void enque(int x)
	{
		if (isFull())
		{
			return;
		}
		arr[size] = x;
		size++;
	}
	void deque()
	{
		if (isEmpty())
		{
			return;
		}
		for (int i = 0; i < size - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		size--;
	}
	int getFront()
	{
		if (isEmpty())
		{
			return -1;
		}
		else
		{
			return 0;
		}
	}
	int getRear()
	{
		if (isEmpty())
		{
			return -1;
		}
		else
		{
			return size - 1;
		}
	}
};
int main()
{

	// Implementation of Queue using arrays(simple)
	Queue q(5);
	for (int i = 0; i < 5; i++)
	{
		int ele;
		cin >> ele;
		q.enque(ele);
	}
	cout << q.isFull() << "\n";
	cout << q.isEmpty() << "\n";
	cout << q.getFront() << "\n";
	cout << q.getRear() << "\n";
	q.deque();
	cout << q.getRear() << "\n";
	cout << q.getFront() << "\n";

	return 0;
}