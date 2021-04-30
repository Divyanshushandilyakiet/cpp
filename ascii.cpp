// print the ASCII value of any character
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char c;
    cout << "Enter a chacrater:";
    cin >> c;

    cout << "The ASCII value of " << c << " is " << int(c);
    return 0;
}
