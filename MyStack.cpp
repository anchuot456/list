#include "MyStack.h"

template <typename T>
MyStack<T>::MyStack() : MyVector<T>()
{
}

template <typename T>
MyStack<T>::MyStack(const int n) : MyVector<T>(n)
{
}

template <typename T>
MyStack<T>::~MyStack()
{
}

template <typename T>
void MyStack<T>::Push(const T &t)
{
	MyVector<T>::PushBack(t);
}

template <typename T>
T MyStack<T>::Pop()
{
	return MyVector<T>::PopBack();
}