#include<iostream>
using namespace std ;
 int main()
 {
     long long int n , k ;
     cin>>n>>k ;
     for ( long long int i=0 ; i<n ; i++)
     {
         if ( ((i+1)*(i+2)/2) - ( n-(i+1)) == k  )
         {
             cout<<n-(i+1);
             return 0 ;
         }
     }
 }