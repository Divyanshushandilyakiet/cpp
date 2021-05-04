// ocnvert hexadecimal to decimal
#include<bits/stdc++.h>
using namespace std;
int hexadecimalTodecimal(string n)
{
    int ans=0;
    int x=1;
    int s=n.size();
    for(int i=s-1;i>=0;i--)
    {
        if(n[i]>='0'&&n[i]<='9')
        {
            ans=ans+x*(n[i]-'0');
        }
        else if(n[i]>='A'&&n[i]<='F')
        {
            ans=ans+x*(n[i]-'A'+10);
        }
        x=x*16;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    string n;
    cout<<"Enter any hexadecimal number::";
    cin>>n;
    cout<<hexadecimalTodecimal(n)<<endl;
    return 0;
}
