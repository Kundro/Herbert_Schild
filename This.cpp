// �������� ����� this

/*
#include <iostream>
#include <cstdlib>

using namespace std;

class OBJ {
	int i;
public:
	void seti(int i) { this->i = i; }
	void outi() { cout << this->i << endl; }
};

void fun(OBJ x)
{
	x.outi();
	x.seti(10);
	x.outi();
}

int main()
{
	setlocale(LC_ALL, "ru");
	OBJ a;
	cout << "����� ������ ���������� - ";
	a.outi();
	cout << "��������� 15. ����� - ";
	a.seti(15); a.outi();
	cout << "������� - ";
	fun(a);

	return 0;
}
*/