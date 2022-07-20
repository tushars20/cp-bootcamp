#include<iostream>
using namespace std ;
long long int time(  long long int n ,long long int v[], long long int m )
{  // a= house number ;
    long long int t =0 ;
    long long int a = 1 ;
    for (long long int i=0 ; i<m ; i++)
    {
        if ( v[i] >= a ) 
        {
            t += v[i] - a ;
            a = v[i] ;
        }
        else 
        {
            t+=  n- a + v[i];
            a = v[i] ;
        }
      
    }
    return t ;
}
int main()
{
    long long int n , m ;
    cin>>n ;
    cout<<' ';
    cin>>m ;
   long long int v[100005];
    for (  int i=0 ; i<m ; i++)
    {
        cin>>v[i];
    }
cout<<time( n , v , m);
}