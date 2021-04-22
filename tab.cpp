// To display multiplication table upto 10
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i;
    cout << "Enter a positive integer===>>>";
    cin >> n;

    for (i = 1; i <= 10; i++)
    {
        cout << n << "*" << i << "=" << n * i << endl;
    }
    return 0;
}
