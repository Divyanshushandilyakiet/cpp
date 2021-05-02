// print fibenacci series using function
#include<iostream>
using namespace std;
void fib(int n){
    int t1=0;
    int t2=1;
    int nextTerm,i;
    cout<<"The fibenacci series ===>>>\n";
    for(i=1;i<=n;i++)
    {
        cout<<t1<<endl
        
        ;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a number:";
    cin>>n;

    fib(n);
    return 0;
}
