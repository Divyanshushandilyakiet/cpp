// Program to print complex number
#include<iostream>
using namespace std;
struct complex
{

private:
    int a, b;

public:
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }
    void show_data()
    {
        cout << "\na=" << a << "\nb=" << b;
    }
};
int main(int argc, char const *argv[])
{
    complex c1;
    c1.set_data(3, 4);
    c1.show_data();
    return 0;
}
