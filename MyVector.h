#ifndef __MYVECTOR_H__
#define __MYVECTOR_H__

#include <iostream>
using namespace std;

#pragma once

const int _DEFAULT_VECTOR_SIZE = 4;

template <typename T>
class MyVector
{
private:
	T	*m_array;
	int	m_size;
	int	m_reserved_size;
public:
	typedef T* interator;

	MyVector();
	MyVector(int n);
	~MyVector();

	int Size();
	bool IsEmpty();

	void PushBack(const T &t);
	T PopBack();
	T PopFirst();
	void Resize(const int n);
	interator Begin();
	interator End();
	T& Front();
	T& Back();
	T& operator[](int index);
	void Clear();
	void Print();
};

#endif // !__MYVECTOR_H__