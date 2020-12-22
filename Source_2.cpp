// Возвращение объектов функциями

/* 
#include <iostream>
#include <cstdlib>

using namespace std;

class sample
{
	char s[80];
public:
	void show() { cout << s << "\n"; }
	void set(char* str) { strcpy_s (s, str); }
};

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
	ob = input(); // функция input возвращает объект класса sample.
	ob.show();

	return 0;
}
*/