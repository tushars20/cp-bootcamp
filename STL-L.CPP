#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m , n ;
    cin>>n>>m ;
    int a[50];
    for ( int i=0 ; i<m ; i++)
    {
        cin>>a[i];
    }
    sort(a , a+m);
    int ans = a[n-1] - a[0];
   for ( int i=0 ; i< m-n+1 ; i++)
   {
       if ( ans >= a[i+n-1]-a[i])
       ans = a[i+n-1]-a[i];
   }
   cout<<ans;
 
}