#pragma once

#include<iostream>
using namespace std;

template<class Q >
class SimpleQueue
{
	Q* _queue;
	int _capacity;
	int _size;
public:
	SimpleQueue();
	SimpleQueue(int);
	~SimpleQueue();
	bool isEmpty();		//? IsEmpty Ч перев≥рка черги на порожнечу;
	bool isFull();		//? IsFull Ч перев≥рка черги на заповненн€;
	void enQueue(Q);	//? Enqueue Ч додаванн€ елемента в чергу;
	Q deQueue();		//? Dequeue Ч видаленн€ елемента з черги;
	void show();		//? Show Ч в≥дображенн€ вс≥х елемент≥в черги на екран.

};

template<class Q>
inline SimpleQueue<Q>::SimpleQueue() :SimpleQueue(1) {}

template<class Q>
inline SimpleQueue<Q>::SimpleQueue(int capacity): _size(0)
{
	_capacity = capacity;
	_queue = new Q[_capacity];
}

template<class Q>
inline SimpleQueue<Q>::~SimpleQueue()
{
	if (!isEmpty())
	{
		delete[]_queue;
	}
}

template<class Q>
inline bool SimpleQueue<Q>::isEmpty()
{
	if (_size == 0)
	{
		return true;
	}
	return false;
}

template<class Q>
inline bool SimpleQueue<Q>::isFull()
{
	if (_size == _capacity)
	{
		return true;
	}
	return false;
}

template<class Q>
inline void SimpleQueue<Q>::enQueue(Q el)
{
	if (!isFull())
	{
		_queue[_size++] = el;
	}
}

template<class Q>
inline Q SimpleQueue<Q>::deQueue()
{
	if (!isEmpty())
	{
		Q temp = _queue[0];
		for (int i = 0; i < _size-1; i++)
		{
			_queue[i] = _queue[i + 1];
		}
		_size--;
		return temp;
	}
	cout << "Queue is empty! return 0" << endl;
	return 0;
}

template<class Q>
inline void SimpleQueue<Q>::show()
{
	for (int i = 0; i < _size; i++)
	{
		cout << _queue[i] << " ";
	}
	cout << endl;
}
