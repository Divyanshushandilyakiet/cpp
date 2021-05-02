// print prime numbers between 2 given numbers by using of function
#include <iostream>
#include<math.h>
using namespace std;
bool isprime(int num)
{
    int i;
    for (i = 2; i <= sqrt(num) ; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    int a, b, i;
    cout << "Enter two numbers:";
    cin >> a >> b;
    cout<<"The prime numbers are:\n";
    for (i = a; i <= b; i++)
    {
        if (isprime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}
