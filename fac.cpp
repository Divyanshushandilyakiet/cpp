// Dispaly all factors of the number 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,i;
    cout<<"Enter any positive number:";
    cin>>n;
    cout<<"The factor of"<<n<<"are:\n";
    for(i=1;i<=n;i++)
    {
     if(n%i==0)
     {
         cout<<i<<endl;
     }
    }
    return 0;
}
