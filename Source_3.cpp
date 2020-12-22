// Проблемы при возвращении объектов функциями. В данном примере некорректный код!

/*
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class sample {
	char* s;
public:
	sample() { s = 0; }
	~sample() {
		if (s) delete[]s;
		cout << "Freeing up s-memory!\n"; }
	void show() { cout << s << "\n"; }
	void set(char* str);
};

void sample::set(char* str) // Loading a string
{
	s = new char[strlen(str) + 1];
	strcpy(s, str);
}

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
*/