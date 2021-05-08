// print sum of the array
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n , i, sum = 0;
    cout << "Enter the limit of array";
    cin >> n;

    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cout << " Enter arr [ " << i << " ] : ";
        cin >> arr[i];
    }
   
    for ( i = 0; i < n; i++)
    {
        
        sum += arr[i];
    }
    cout << "The sum of the array is==>> " << sum << endl;
    return 0;
}
