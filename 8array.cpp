// program=>> selection sorting 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,i,j;
    cout<<"Enter the number of element==>>";
    cin>>n;

    int arr[n];
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for( i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
