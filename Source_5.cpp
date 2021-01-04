// ѕерегрузка оператора + и = //
// ѕерегрузка унарных операторов //

/*
#include <iostream>
#include <cstdlib>
using namespace std;

class three_d {
	int x, y, z;
public:
	three_d() {	x = 0; y = 0; z = 0; }
	three_d(int i, int j, int k) { x = i; y = j; z = k; }
	three_d operator+(three_d op2);
	three_d operator=(three_d op2);
	three_d operator++();
	three_d operator++(int notused);

	void show() { cout << x << ", " << y << ", " << z << "." << endl; }
};

three_d three_d::operator++(int notused)
{
	three_d temp = *this;
	x++;
	y++;
	z++;
	return temp;
}

three_d three_d::operator++()
{
	x++;
	y++;
	z++;
	return *this;
}

three_d three_d::operator+(three_d op2)  // ѕерегрузка оператора +
{
	three_d temp;  

	temp.x = x + op2.x;   // ќперации сложений целочисленных значений не тер€ют смысл
	temp.y = y + op2.y;
	temp.z = z + op2.z;
	return temp;
}

three_d three_d::operator=(three_d op2)
{
	x = op2.x;
	y = op2.y;
	z = op2.z;
	return *this;
}

int main()
{
	three_d a(1, 2, 3), b(10, 10, 10), c;

	a.show(); b.show(); c.show();
	cout << "-----------------------------------------" << endl;
	c = a + b;
	a.show(); b.show(); c.show();
	cout << "-----------------------------------------" << endl;
	c = a + b+c;
	a.show(); b.show(); c.show();
	cout << "-----------------------------------------" << endl;
	++c;
	a.show(); b.show(); c.show();
	cout << "-----------------------------------------" << endl;
	c++;
	a.show(); b.show(); c.show();

	return 0;
}

*/