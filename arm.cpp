// program to check the armstrong number
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter nay number to check ";
    cin >> n;

    int sum = 0;
    int orin = n;

    while (n > 0)
    {
        int lastdigi = n % 10;
        sum += pow(lastdigi, 3);
            n = n / 10;
    }
    if (sum == orin)
    {
        cout << "Its an armstrong number" << endl;
    }
    else
    {
        cout << "Its not an armstrong number" << endl;
    }
    return 0;
}
