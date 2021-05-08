// Print maximum and minimum number
#include <iostream>
#include <climits>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the size of the array >>>>";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }
    cout << maxNo << " " << minNo << endl;
    return 0;
}
