// ������������� ������������ ����� ��� ����������� ��������� �������
/*
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class myclass {
	int* p;
public:
	myclass(int i); // ������� �����������
	myclass(const myclass& ob); // ����������� �����
	~myclass();
	int getval() { return *p; }
};

myclass::myclass(const myclass& ob)  // ����������� �����
{
	p = new int; // ���������� �
	*p = *ob.p; // �������� �����
	cout << "����������� ����� ������.\n";
}

myclass::myclass(int i)  // ������� �����������
{
	cout << "��������� ������, ���������� ���������� p.\n";
	p = new int;
	*p = i;
}

myclass::~myclass()
{
	cout << "������������ ������, ���������� ���������� p.\n";
	delete p;
}

void display(myclass x)
{
	cout << x.getval() << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	myclass a(10); // "����������" �������� ������������ ���������� ������ � ����� ���� ������� ������������� ��������� a.p 
	display(a); // ������ 'a' ���������� ������� �������. � ������ ������� 'x'.

	return 0;
}
*/