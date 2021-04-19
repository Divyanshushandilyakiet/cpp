// program to check the number is positive
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter an integer: ";
    cin>>n;

    // check the number is positive 
    if(n>0)
    {
        cout<<"You entered the positive integer: "<<n;
    }
    else
    {
        cout<<"This statement is always executed ";
    }

    
    return 0;
}
