// sum of first n natural numbers
#include <bits/stdc++.h>
using namespace std;
int sum(int num)
{
    int i,ans=0;
    for(i=1;i<=num;i++)
    {
       ans+=i;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Enter any number =>> ";
    cin>>n;

    cout<<"The sum is "<< sum(n)<<endl;
    return 0;
}
 