// Add positive integers
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, sum = 0;
    cout << "Enter a number===>>>";
    cin >> num;

    while (num >= 0)
    {
        sum = sum + num;
        cout << "Enter another number===>>>";
        cin >> num;
    }
    cout << "\nThe sum is " << sum << endl;
    return 0;
}
