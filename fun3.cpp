// print factorial of a number
#include <iostream>
using namespace std;
int fact(int n)

{
    int facto = 1, i;
    for (i = 2; i <= n; i++)
    {
        facto *= i;
    }
    return facto;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter any number==>>";
    cin >> n;

    int ans = fact(n);
    cout << "The factorial is " << ans << endl;
    return 0;
}
