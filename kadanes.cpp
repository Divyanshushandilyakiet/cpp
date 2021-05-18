// Maximum sum of subaary
#include <iostream>
#include <climits>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i;
    cout << " Enter the limits of elements-===>> ";
    cin >> n;

    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int currentSum = 0;
    int maxSum = INT_MIN;
    for (i = 0; i < n; i++)
    {
        currentSum = currentSum + arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    cout << maxSum << endl;
    return 0;
}
