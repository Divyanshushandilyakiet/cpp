// Kids with the greatest number of candies
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i;
    cout << "Number of the students==>> ";
    cin >> n;

    int arr[n];
    cout << "Enter the number of candies==>>\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 1; i < n; i++)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    cout << "Kids with the greatest number of candies --->>" << arr[0] << endl;

    return 0;
}
