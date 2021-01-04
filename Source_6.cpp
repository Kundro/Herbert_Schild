// В данной программе используются перегруженные операторные функции-"друзья" operator++() //

#include <iostream>
#include <cstdlib>
using namespace std;

class three_d
{
	int x, y, z; // 3-мерные координаты
public:
	three_d() { x = 0; y = 0; z = 0; };
	three_d(int i, int j, int k) { x = i; y = j; z = k; }
	
	friend three_d operator+(three_d op1, three_d op2);
	three_d operator=(three_d op2);
	
	friend three_d operator++(three_d& op1);                // Эти функции друзья для перегрузки оператора ++ используют
	friend three_d operator++(three_d& op1, int notused);   // ссылочные параметры.

	void show();
};

three_d operator+(three_d op1, three_d op2)  // функция-"друг"
{
	three_d temp;

	temp.x = op1.x + op2.x;
	temp.y = op1.y + op2.y;
	temp.z = op1.z + op2.z;
	return temp;
}

three_d three_d::operator=(three_d op2)   // перегругка оператора "="
{
	x = op2.x;
	y = op2.y;
	z = op2.z;
	return *this;
}

three_d operator++(three_d& op1) {    // перегрузка ПРЕФИКСНОЙ версии оператора "++" с использованием функции-"друга".
									  // для этого используется ссылочный параметр.
	op1.x++;
	op1.y++;
	op1.z++;
	return op1;
}
three_d operator++(three_d& op1, int notused) {    // перегрузка ПРЕФИКСНОЙ версии оператора "++" с использованием функции-"друга".
												   // для этого используется ссылочный параметр.
	three_d temp = op1;
	op1.x++;
	op1.y++;
	op1.z++;
	return temp;
}

void three_d::show()
{
	cout << x << ", " << y << ", " << z << ".\n";
}

int main()
{
	three_d a(1, 2, 3); three_d b(10, 10, 10); three_d c;
	c = a + b;
	c.show();

	c++;
	c.show();
	++c;
	c.show();
}