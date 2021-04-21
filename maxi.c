// check maximun and minimum number
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    int n1, n2;
    cout << "Enter two integers==>> ";
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        cout << n1 << " is maximum ";
    }
    else
    {
        cout << n2 << " is maximun";
    }

    return 0;
}
