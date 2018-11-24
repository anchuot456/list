#include "MyVector.h"

template <typename T>
MyVector<T>::MyVector() 
{
	m_array = new T[_DEFAULT_VECTOR_SIZE];
	m_reserved_size = _DEFAULT_VECTOR_SIZE;
	m_size = 0;
}

template <typename T>
MyVector<T>::MyVector(int n)
{
	m_array = new T[n];
	m_reserved_size = n;
	m_size = 0;
}

template <typename T>
MyVector<T>::~MyVector()
{
	delete[] m_array;
}

template <typename T>
int MyVector<T>::Size()
{
	return m_size;
}

template <typename T>
bool MyVector<T>::IsEmpty()
{
	return m_size == 0;
}

template <typename T>
T MyVector<T>::PopBack()
{
	T value = m_array[m_size - 1];
	m_size--;
	return value;
}

template <typename T>
T MyVector<T>::PopFirst()
{
	T value = m_array[0];

	m_size--;
	for (int i = 0; i < m_size; i++)
	{
		m_array[i] = m_array[i + 1];
	}
	
	return value;
}

template <typename T>
void MyVector<T>::PushBack(const T &t)
{
	if (m_size == m_reserved_size)
		Resize(m_reserved_size + _DEFAULT_VECTOR_SIZE);

	array_[size_] = t;
	size_++;
}

template <typename T>
void MyVector<T>::Resize(const int n)
{
	if (n > m_reserved_size)
	{
		//auto_array<T> new_array( new T[n]); 
		T *new_array = new T[n];
		for (int i = 0; i < m_size; i++)
		{
			new_array[i] = m_array[i];
		}

		delete[] m_array;
		m_array = new_array;
		m_reserved_size = n;
	}
}

template <typename T>
typename MyVector<T>::interator MyVector<T>::Begin()
{
	return m_array;
}

template <typename T>
typename MyVector<T>::interator MyVector<T>::End()
{ 
	return m_array + m_size;
}

template <typename T>
T& MyVector<T>::Front()
{
	return m_array[0];
}

template <typename T>
T& MyVector<T>::Back()
{
	return m_array[m_size - 1];
}

template <typename T>
T& MyVector<T>::operator[](int index)
{
	return m_array[index];
}

template <typename T>
void MyVector<T>::Clear()
{
	m_size = 0; 
	m_reserved_size = 0;
	delete[] m_array;
}

template <typename T>
void MyVector<T>::Print()
{
	cout << endl;
	for (int i = 0; i < m_size; i++)
	{
		cout << m_array[i] << "\t";
	}
	cout << endl;
}