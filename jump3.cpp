// To print all prime numbers in a given range
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, num, i;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    for (num = a; num <= b; num++)
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << num << endl;
        }
    }
    return 0;
}
