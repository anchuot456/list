#ifndef __MYQUEUE_H__
#define __MYQUEUE_H__

#include <iostream>
#include "MyVector.h"
using namespace std;

#pragma once
template <typename T>
class MyQueue : public MyVector<T>
{
public:
	MyQueue();
	MyQueue(const int n);
	~MyQueue();

	void Push(const T &t);
	T Pop();
};

#endif // !__MYQUEUE_H__