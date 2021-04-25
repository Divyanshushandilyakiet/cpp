#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x;
    cout << "Enter any number:";
    cin >> x;
    (x & 10) ? cout << "True" : cout << "False";
    return 0;
}
