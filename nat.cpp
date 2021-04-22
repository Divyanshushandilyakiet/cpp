// print n natural numbers
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i, sum = 0;
    cout << "Enter the limit number==>> ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of n natural numbers is  " << sum;
    return 0;
}
