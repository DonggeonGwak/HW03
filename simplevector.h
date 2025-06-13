#pragma once
//- Ŭ������ �̸��� SimpleVector��� �մϴ�.
//- Ÿ�Կ� �������� �ʰ� �����͸� ������ �ִ� �迭�� ��������� �����ϴ�.
//- �����ڴ� �Ʒ��� ���� ���� �մϴ�.
//- �⺻ �����ڴ� ũ�Ⱑ 10�� �迭�� ����ϴ�.
//- ���ڸ� �ϳ� �޴� �����ڴ� �ش� ���ڿ� �ش�Ǵ� ũ���� �迭�� ����ϴ�.
//- �Ʒ��� ���� ����Լ��� ���� �մϴ�.
//- push_back  ���ڷ� ���� ���Ҹ�  �� �ڿ� �߰� �մϴ�.��ȯ���� �����ϴ�.�迭�� ũ�Ⱑ �� á�µ� ���Ұ� �� ���ð�� �ƹ� ���۵� ���� �ʽ��ϴ�.
//- pop_back�� ������ ������ ���Ҹ� ���� �մϴ�.���� ������ ���Ұ� ���ٸ� �ƹ� ���۵� ���� ������, ���� �� ��ȯ���� �����ϴ�.
//- size�� ���ڰ� ���� ���� ������ ������ ��ȯ�մϴ�.
//- capacity ���� ���� �迭�� ũ�⸦ ��ȯ�մϴ�.

#include <iostream>

using namespace std;

template <typename T>
class SimpleVector
{
private:
	T* data;
	int currentSize;
	int currentCapacity;

public:
	SimpleVector() : currentSize(0), currentCapacity(10)
	{
		data = new T[currentCapacity];
	}

	SimpleVector(int size) : currentSize(0), currentCapacity(size)
	{
		data = new T[currentCapacity];
	}

	void push_back(const T& x)
	{
		if (currentSize < currentCapacity)
		{
			data[currentSize++] = x;
		}
	}

	void pop_back()
	{
		if (currentSize > 0)
		{
			currentSize--;
		}
	}

	int Size()
	{
		return currentSize;
	}

	int capacity()
	{
		return currentCapacity;
	}

	void clean()
	{
		delete[] data;
		data = nullptr;
	}
};