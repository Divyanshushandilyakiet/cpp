// Add two numbers
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int firstnumber, secondnumber, thridnumber;
    cout << "Enter two numbers: ";
    cin >> firstnumber >> secondnumber;

    // sum of two numbers i stored in thirdnumber

    thridnumber = firstnumber + secondnumber;
    //  print sum
    cout << firstnumber << "+" << secondnumber << "=" << thridnumber;

    return 0;
}
