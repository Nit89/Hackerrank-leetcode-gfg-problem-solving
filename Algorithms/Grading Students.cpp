#include <bits/stdc++.h>

using namespace std;
int main(){
    int a;
int n;
cin>>n;
for(int i = 0 ;i<n; i ++)
{  
    
    cin>>a;
    int b  = a;
    if(b >= 38 && b!= (b%5==0)){
        
    {
     do{ 
          b++;
       } 
     while( b % 5 !=0) ;
     int c = b - a;
     if (c < 3)
     {
         cout<<b<<endl;
     }
     else {
       cout<<a<<endl;
     }
    }
    
    }
    else
    {
    cout << a<< endl;    
    }
}

}
