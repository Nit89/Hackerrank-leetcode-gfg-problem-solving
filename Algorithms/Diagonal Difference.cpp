#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int n;
    int sum = 0; int sum2 = 0;
    cin>>n;
    int mat [n][n];
     for(int i =0 ; i<n; i ++)
     {
         for(int j =0 ; j<n; j++)
         {
             cin>> mat[i][j];
         }
     }
     for (int i =0; i<n; i++)
     {
         sum = sum + mat[i][i];
     } 
     for (int i =0; i<n; i++)
     {
         sum2 = sum2 + mat[i][n-i-1];
     }
     
     int diff = abs(sum - sum2);
     cout<< diff <<endl;
      
     
     
}
