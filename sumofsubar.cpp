// Maximum sum of subaary
#include <iostream>
#include <climits>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i, j, k;
    cout << "Enter the number of elements of subarray==>";
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxSum = INT_MIN;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            int sum = 0;
            for (k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    }
    cout<<maxSum<<" ";
    return 0;
}
