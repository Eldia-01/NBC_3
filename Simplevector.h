#pragma once
#include <iostream>

using namespace std;

// Ÿ�Կ� �������� �ʰ� ���ø� ����
template <typename T>
// Ŭ���� �̸��� Simplevector
class Simplevector
{
private:
	int currentSize;		//���� ������ ����
	int currentCapacity;	//�迭�� �ִ� ũ��
	T* data;				//Ÿ���� ������ �ʴ� �迭

public:
	//������ ũ�Ⱑ 10�� ������ �迭
	Simplevector() : currentSize(0), currentCapacity(10)
	{
		data = new T[currentCapacity];
	}

	//ũ�⸦ ���ڷ� �޴� ������
	Simplevector(int iniCapacity) : currentSize(0), currentCapacity(iniCapacity)
	{
		data = new T[currentCapacity];
	}


	void cleanVector()
	{
		delete[] data;
	}

	//push_back�� �̿��� �Լ� ���ڷ� ���� ���Ҹ�  �� �ڿ� �߰� �մϴ�.��ȯ���� �����ϴ�.�迭�� ũ�Ⱑ �� á�µ� ���Ұ� �� ���ð�� �ƹ� ���۵� ���� �ʽ��ϴ�
	void Push_back(const T& value)
	{
		if (currentSize < currentCapacity)
			data[currentSize++] = value;
	}

	//pop_back ������ ������ ���Ҹ� ���� �մϴ�.���� ������ ���Ұ� ���ٸ� �ƹ� ���۵� ���� ������, ���� �� ��ȯ���� �����ϴ�.
	void Pop_Back()
	{
		if (currentSize > 0)
			currentSize--;
	}

	// size�� ���ڰ� ���� ���� ������ ������ ��ȯ�մϴ�.
	int size()
	{
		return currentSize;
	}

	//- capacity ���� ���� �迭�� ũ�⸦ ��ȯ�մϴ�.
	int capacity()
	{
		return currentCapacity;
	}

	void printAll()
	{
		cout << "���� �迭�� ����: ";

		for (int i = 0; i < currentSize; i++)
		{
			cout << data[i] << " ";
		}

		cout << endl;
	}

};