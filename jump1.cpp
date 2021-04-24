// print all odd numbers
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i<<endl;
    }
    return 0;
}
