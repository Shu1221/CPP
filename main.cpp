#include <iostream>

using namespace std;

void show_value(int a)
{
    cout << a << endl;
    return;
}

int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int x = add(10, 20);
    show_value(x);
}