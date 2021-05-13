// program==>> bubble sorting
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i;
    cout << "Enter the element of array";
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count=1;
    while (count<n-1)
    {
        for(i=0;i<n-count;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }count++;
    }
for (i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
