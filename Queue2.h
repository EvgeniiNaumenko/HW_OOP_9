#pragma once
#include<iostream>
using namespace std;

template<class Q >
class PrExQueue //������� � ������������ �����������
{
	Q* _queue;
	int* _priority;
	int _capacity;
	int _size;
public:
	PrExQueue();
	PrExQueue(int);
	~PrExQueue();
	bool isEmpty();							//? IsEmpty � �������� ����� �� ���������;
	bool isFull();							//? IsFull � �������� ����� �� ����������;
	void insertWithPriority(Q, int);		//? InsertWithPriority � ��������� �������� � ���������� � �����;
	Q pullHighestPriorityElement();			//? PullHighestPriorityElement � ��������� �������� � �������� ���������� � �����;
	Q peek();								//? Peek � ���������� ���������� �� ���������� ��������.�������� ���� �����, �� ������� �� ����������� � �����;
	void show();							//? Show � ��������� ��� �������� ����� �� �����.
};

template<class Q>
inline PrExQueue<Q>::PrExQueue() :PrExQueue(1) {}

template<class Q>
inline PrExQueue<Q>::PrExQueue(int capacity): _size(0)
{
	_capacity = capacity;
	_queue = new Q[_capacity];
	_priority = new int[_capacity];
}

template<class Q>
inline PrExQueue<Q>::~PrExQueue()
{
	delete[]_queue;
	delete[]_priority;
}

template<class Q>
inline bool PrExQueue<Q>::isEmpty()
{
	if (_size == 0)
	{
		return true;
	}
	return false;
}

template<class Q>
inline bool PrExQueue<Q>::isFull()
{
	if (_size==_capacity)
	{
		return true;
	}
	return false;
}

template<class Q>
inline void PrExQueue<Q>::insertWithPriority(Q el, int prior)
{
	if (!isFull())
	{
		_queue[_size] = el;
		_priority[_size] = prior;
		_size++;
	}
}

template<class Q>
inline Q PrExQueue<Q>::pullHighestPriorityElement()
{
	if (!isEmpty())
	{
		Q el;
		int priority = 0;
		for (int i = 0; i < _size; i++)
		{
			if (_priority[priority]<_priority[i])
			{
				priority = i;
			}
		}
		el= _queue[priority];
		for (int j = priority; j < _size - 1; j++)
		{
			_queue[j] = _queue[j + 1];
		}
		for (int j = priority; j < _size - 1; j++)
		{
			_priority[j] = _priority[j + 1];
		}
		_size--;
		return el;
	}
	return 0;
}

template<class Q>
inline Q PrExQueue<Q>::peek()
{
	if (!isEmpty())
	{
		int priority = 0;
		for (int i = 0; i < _size; i++)
		{
			if (_priority[priority] < _priority[i])
			{
				priority = i;
			}
		}
		return _queue[priority];
	}
	return 0;
}

template<class Q>
inline void PrExQueue<Q>::show()
{
	for (int i = 0; i < _size; i++)
	{
		cout <<"EL: " <<_queue[i] << " Prior: "<< _priority[i]<< "  ";
	}
	cout << endl;
}
