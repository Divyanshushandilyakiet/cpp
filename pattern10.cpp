// print 0-1 pattern
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i, j;
    cout << "Enter any number:";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}