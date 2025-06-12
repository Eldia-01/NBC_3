//-Ŭ������ �̸��� SimpleVector��� �մϴ�.
//- Ÿ�Կ� �������� �ʰ� �����͸� ������ �ִ� �迭�� ��������� �����ϴ�.
//- �����ڴ� �Ʒ��� ���� ���� �մϴ�.
//  - �⺻ �����ڴ� ũ�Ⱑ 10�� �迭�� ����ϴ�.
//  - ���ڸ� �ϳ� �޴� �����ڴ� �ش� ���ڿ� �ش�Ǵ� ũ���� �迭�� ����ϴ�.
//- �Ʒ��� ���� ����Լ��� ���� �մϴ�.
//  - push_back  ���ڷ� ���� ���Ҹ�  �� �ڿ� �߰� �մϴ�.��ȯ���� �����ϴ�.�迭�� ũ�Ⱑ �� á�µ� ���Ұ� �� ���ð�� �ƹ� ���۵� ���� �ʽ��ϴ�.
//  - pop_back�� ������ ������ ���Ҹ� ���� �մϴ�.���� ������ ���Ұ� ���ٸ� �ƹ� ���۵� ���� ������, ���� �� ��ȯ���� �����ϴ�.
//  - size�� ���ڰ� ���� ���� ������ ������ ��ȯ�մϴ�.
//  - capacity ���� ���� �迭�� ũ�⸦ ��ȯ�մϴ�.
#include <iostream>
#include "Simplevector.h"


using namespace std;

int main()
{	
	Simplevector<int> sm;
	sm.Push_back(10);
	sm.Push_back(20);
	sm.Push_back(30);

	cout << sm.size() << endl;
	cout << sm.capacity() << endl;

	sm.printAll();

	sm.cleanVector();

	Simplevector<char> sm2(5);
	sm2.Push_back('s');
	sm2.Push_back('d');
	sm2.Push_back('e');
	sm2.Push_back('q');

	cout << sm2.size() << endl;
	cout << sm2.capacity() << endl;

	sm2.printAll();

	sm2.cleanVector();
	
	cout << "Ʃ�ʹ� �˼��Ե�><" << endl;

}