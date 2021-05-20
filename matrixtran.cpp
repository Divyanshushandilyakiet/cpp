// Transpose of matrix
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=3;
    int arr[n][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            //   swap

            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    //   print the transpose

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
