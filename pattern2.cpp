// print a hollow rectangle
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int row, col, i, j;
    cout << "Enter the numbers of row: ";
    cin >> row;
    cout << "Enter the number of coloum: ";
    cin >> col;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (i == 1 || i == row)
            {
                cout << "*";
            }
            else if (j == 1 || j == col)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout <<endl;
    }
    return 0;
}
