// Input and output in array
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the size of an array...>";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The array is \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}
