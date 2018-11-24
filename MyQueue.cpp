#include "MyQueue.h"

template <typename T>
MyQueue<T>::MyQueue() : MyVector<T>()
{
}

template <typename T>
MyQueue<T>::MyQueue(const int n) : MyVector<T>(n)
{
}

template <typename T>
MyQueue<T>::~MyQueue()
{
}

template <typename T>
void MyQueue<T>::Push(const T &t)
{
	MyVector<T>::PushBack(t);
}

template <typename T>
T MyQueue<T>::Pop()
{
	return MyVector<T>::PopFirst();
}