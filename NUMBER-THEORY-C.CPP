#include<iostream>
#include<vector>
using namespace std;
int factor(int n)
{
    int k=0 ;
    while (n%2==0)
    {
        k++;
        n=n/2;
    }
    for ( int i=3 ; n/i!=0 ; i+=2)
    {
        while ( n%i==0)
        {
            k++;
            n=n/i;
        }
    }
    return k ;
}
int main()
{ 
    int n , k;
    cin>>n>>k;
    int x = n ;
    if ( k>factor(n))
    {
        cout<<-1;
        return 0;
    }
    int p =0;
    vector<int>v(factor(n));
    while (x%2==0)
    {
        v[p] = 2;
        p++;
        x=x/2;
    }
    for ( int i=3 ; x/i!=0 ; i+=2)
    {
        while ( x%i==0)
        {
            v[p] = i ;
            p++;
            x=x/i;
        }
    }
    for ( int i=0 ; i<k-1 ; i++)
    {
        cout<<v[i]<<' ';
    }
    int ans = 1 ;
    for ( int i=k-1 ; i<factor(n) ; i++)
    {
        ans*=v[i];
    }
    cout<<ans;
}