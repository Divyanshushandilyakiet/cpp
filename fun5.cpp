// Print pascal triangle
#include <iostream>
using namespace std;
int fact(int n)
{
    int i, facto = 1;
    for (i = 2; i <= n; i++)
    {
        facto *= i;
    }
    return facto;
}
int main(int argc, char const *argv[])
{
    int n, i, j;
    cout << "Enter a number:: ";
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(j) * fact(i - j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}
