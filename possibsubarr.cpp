// Print possible subarrays
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i, j, k;
    cout << "Enter number of elements of array-=>>";
    cin >> n;

    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            for (k = i; k <= j; k++)
            {
                cout << a[k] << " ";
            }
            cout<<endl;
        }
    }

    return 0;
}
