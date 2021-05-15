// maximum output
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int mx = -1999999999;
    int n, i;

    cout << "Enter the number of elements of the array==>>";
    cin >> n;

    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx<<" ";
    }

    return 0;
}
