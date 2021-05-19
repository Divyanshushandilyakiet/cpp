// Deceleration of 2D array
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,m,i,j ;
      cout<<"Enter row and coloum==>";
      cin>>n>>m;

      int arr[n][m];
      for ( i = 0; i <n; i++)
      {
          for ( j = 0; j < m; j++)
          {
              cin>>arr[i][j];
          }
          
      }
      cout<<"The Matrix is :\n";
        for ( i = 0; i <n; i++)
      {
          for ( j = 0; j < m; j++)
          {
              cout<<arr[i][j]<<" ";
          }
          cout<<"\n";
      }
          
    return 0;
}
