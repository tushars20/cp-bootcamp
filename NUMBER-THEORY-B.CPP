#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;
bool coprime( ll a , ll b)
{
    ll g ;
    while ( b!=0)
    {
        g = a%b ;
        a = b ;
        b= g ;
    }
    if ( a==1)
    return 1;
    else
    return 0 ;
 
}
int main()
{
    int n ;
    int k = 0 ;
    cin>>n;
    vector<ll>v(n);
    for ( int i=0 ; i<n ; i++)
    {
        cin>>v[i];
    }
    if ( n==1)
    {
        cout<<0<<endl<<v[0];
        return 0 ;
    }
    vector<ll>v2;
    int i=0 ; 
    while ( i<n)
    {
        if ( i==n-1)
        {
             v2.push_back(v[i]);
            break;
        }
        else if ( !coprime(v[i] , v[i+1]))
        {
            v2.push_back(v[i]);
            v2.push_back(1);
            k++;
        }
 
        else
        {
            v2.push_back(v[i]);
        }
        i++;
    }
    cout<<k<<endl;
    for ( int i=0 ; i<n+k ; i++)
    {
        cout<<v2[i]<<' ';
    }
}