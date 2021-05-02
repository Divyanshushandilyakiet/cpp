// calculate nCr
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
    int n, r;
    cout << "Enter two numbers===>>>";
    cin >> n >> r;

    int ans = fact(n) / (fact(r) * fact(n - r));
    cout << "Factorial of " << n <<" and "<< r << " is " << ans;
    return 0;
}
