// Program ==>> Subarray
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i, j;
    cout << "Enter number of elements of array-=>>";
    cin >> n;

    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int curr = 0;

    for (i = 0; i < n; i++)
    {
        curr = 0;
        for (j = i; j < n; j++)
        {
            curr = curr + a[j];
            cout << curr << " ";
        }
    }
    return 0;
}
