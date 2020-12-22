// Ключевое слово this

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
	cout << "Вывод мусора начального - ";
	a.outi();
	cout << "Присвоили 15. Вывод - ";
	a.seti(15); a.outi();
	cout << "Функция - ";
	fun(a);

	return 0;
}
*/