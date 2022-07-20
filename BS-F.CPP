#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
 
int main()
{
    int t ;
    cin>>t ;
    
    while (t--)
    { 
         int n  ;
        int count = 0 ;
        cin>>n ;
        for ( int i= 3 ; i*i<=2*n - 1 ; i = i + 2)
        {
                count++;
        }
        cout<<count<<endl; 
    }
}