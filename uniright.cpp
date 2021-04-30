// Print all the digits of a positive decimal number from left to right
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter any number:";
    cin>>n;
    while(n>0){
        int rem=n%10;
        cout<<rem<<"\n";
        n=n/10;
    }
    return 0;
}
