#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int minimum(  vector < pair < int , int > > v , int n )
{
    vector < int > a(n+1);
    int i=0 ;
    auto it = v.begin() ;
    a[i] = 0 ;
    for ( it ; it!= v.end() ; it++ )
    { 
         a[i+1] = it->second - it->first + a[i] ;
         i++;
    }
    auto itr = max_element(a.begin() , a.end()-1) ;
    return (*itr) ;
}
int main()
{
    int n ;
    cin>>n ;
    vector < pair < int , int > > v(n) ;
    for ( int i= 0 ; i<n ; i++)
    {
        cin>>v[i].first ;
        cout<<" ";
        cin>>v[i].second ;
    }
    cout<<minimum(v , n);
 
}