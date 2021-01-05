//  В данном примере рассматривалась ошибка. 

#include <iostream>
#include <cstdlib>
using namespace std;

class sample {
	char* s;
public:
	sample() { s = 0; }
	sample(const sample& ob); // конструктор копии
	~sample() {
		if (s) delete[]s;
		cout << "Delete s-memory!" << endl; }
	void show() { cout << s << endl; }
	void set(char* str);
	sample operator=(sample& ob);
};

sample sample::operator=(sample& ob) // перегруженный оператор присваивания ( чтобы предотвратить ошибку добавили перегрузку оператора = )
{
	// если выделенная область памяти имеет недостаточный размер, выделяется новая область памяти //
	if (strlen(ob.s) > strlen(s)) {
		delete[]s;
		s = new char[strlen(ob.s) + 1];
	}
	strcpy(s, ob.s);
	return *this;
}

sample::sample(const sample& ob) // конструктор копии
{
	s = new char[strlen(ob.s) + 1];
	strcpy(s, ob.s);
}

void sample::set(char* str)  // загрузка строки
{
	s = new char[strlen(str) + 1];    // для чего +1 ?????
	strcpy(s, str);
}

// Ниже функция, которая возвращает объект типа sample!
sample input()
{
	char instr[80];
	sample str;

	cout << "Enter a string: ";
	cin >> instr;

	str.set(instr);
	return str;
}

int main()
{
	sample ob;
	ob = input();
	ob.show();

	return 0;
}