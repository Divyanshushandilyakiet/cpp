// convert octal to binary
#include <iostream>
using namespace std;
int octaltodecimal(int n)
{
    int ans = 0;
    int x = 1 ;
    int y;
    while (n > 0)
    {
        y = n % 10;
        ans = ans + (x * y);
        x = x * 8;
        n = n / 10;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a octal number:";
    cin >> n;

    cout << octaltodecimal(n) << endl;
    return 0;
}
