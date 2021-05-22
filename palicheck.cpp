// check if a given character array is a palindrome or not.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter number of chacter's ==>>";
    cin >> n;

    char arr[n + 1];
    cin >> arr;
    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }
    if (check == true)
    {
        cout << "Its a palindrome number";
    }
    else
    {
        cout << "Its not a palindrome number";
    }
    return 0;
}
