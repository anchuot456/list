#ifndef __MYSTACK_H__
#define __MYSTACK_H__

#include <iostream>
#include "MyVector.h"

using namespace std;

#pragma once

template <typename T>
class MyStack : public MyVector<T>
{
public:
	MyStack();
	MyStack(const int n);
	~MyStack();
	void Push(const T &t);
	T Pop();
};

#endif // !__MYSTACK_H__