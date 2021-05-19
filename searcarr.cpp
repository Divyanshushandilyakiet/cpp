// Searching in the array
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, m, i, j;
    cout << "Enter row and coloum==>";
    cin >> n >> m;

    int arr[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The Matrix is :\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    int x;
    cout << "Enter the searching element==>>";
    cin >> x;

    bool flag = false;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i << " " << j << "\n";
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "Element is found\n";
    }
    else
    {
        cout << "Element is not found";
    }
    return 0;
}
