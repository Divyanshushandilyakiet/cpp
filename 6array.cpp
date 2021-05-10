// linear searching
#include<iostream>
using namespace std;
int linearSearch (int arr[],int n,int key)
{
        for(int i=0;i<n;i++)
        {
            if (arr[i]==key)
            {
                return i;
            }
            
        }
        return -1;
}
int main(int argc, char const *argv[])
{
    int n,i;
    cout<<"Enter the size of the array-->>>";
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter a key element-->>";
    cin>>key;

    cout<<linearSearch(arr,n,key)<<endl;
    return 0;
}
