// ���������� ������������ (������ � ������� ���������� � �������� ��������� �������

/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class timer {
    int seconds;
public:
    timer(char* t) { seconds = atoi(t); }     // ������� ����������� ��� ������
    timer(int t) { seconds = t; }       // ������� ���������� ��� ����� �����
    timer(int min, int sec) { seconds = min * 60 + sec; }

    void run();
};

void timer::run() 
{
    clock_t t1;
    t1 = clock();
    while ((clock() / CLOCKS_PER_SEC - t1 / CLOCKS_PER_SEC) < seconds);
    cout << "\a"; // �������� ������
}

int main()
{
 
    timer a(10);
    a.run();

    cout << "Enter the number of seconds: ";
    char str[80];
    cin >> str;
    timer b(str);
    b.run();

    cout << "Enter the numbers of minutes and seconds: ";
    int min, sec;
    cin >> min >> sec;
    timer c(min, sec);
    c.run();


    return 0;
}
*/