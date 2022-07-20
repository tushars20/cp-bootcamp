#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main()
{
    int a , b , c ;
    cin>>a;
    cin>>b;
    cin>>c ;
    int count = 0 ;
    int d ;
    d= a*c ;
  if ( d%b!=0) count = d/b +1 ;
  else count = d/b ;
cout<<count - c ;
}