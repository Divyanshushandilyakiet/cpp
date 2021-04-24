// To check the number is prime or not
#include <iostream>
using namespace std;

int main()
{
    int num, i;
    cout << "Enter a number: ";
    cin >> num;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "This is not a prime number" << endl;
            break;
        }
    }
    if (i == num)
    {
        cout << "This is a prime number" << endl;
    }
    return 0;
}