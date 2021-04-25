#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 1, b = 3, c;
    c = b << a;
    b = c * (b * (++a)--);
    a = a >> b;
    cout << b;

    return 0;
}
