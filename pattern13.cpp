// print palindrome pattern
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i, j;
    cout << "Enter any number:";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int k = i;
        for (; j <= n; j++)
        {
            cout << k--;
        }
        for (k = 2; j <= n + i - 1; j++)
        {
            cout << k++;
        }
        cout << endl;
    }
    return 0;
}
