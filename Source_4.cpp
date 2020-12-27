// Использование конструктора копии для определения параметра функции
/*
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class myclass {
	int* p;
public:
	myclass(int i); // Обычный конструктор
	myclass(const myclass& ob); // Конструктор копии
	~myclass();
	int getval() { return *p; }
};

myclass::myclass(const myclass& ob)  // Конструктор копии
{
	p = new int; // выделяется п
	*p = *ob.p; // значение копии
	cout << "Конструктор копии вызван.\n";
}

myclass::myclass(int i)  // Обычный конструктор
{
	cout << "Выделение памяти, адресуемой указателем p.\n";
	p = new int;
	*p = i;
}

myclass::~myclass()
{
	cout << "Освобождение памяти, адресуемой указателем p.\n";
	delete p;
}

void display(myclass x)
{
	cout << x.getval() << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	myclass a(10); // "Стараниями" обычного конструктора выделяется память и адрес этой области присваивается указателю a.p 
	display(a); // Объект 'a' передается функции дисплей. а именно объекту 'x'.

	return 0;
}
*/