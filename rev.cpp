// program to reverse the number
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter number to reverse it: ";
    cin >> n;
    int reverse = 0;
    while (n > 0)
    {
        int lastdigi = n % 10;
        reverse = reverse * 10 + lastdigi;
        n = n / 10;
    }
    cout << reverse << endl;
    return 0;
}