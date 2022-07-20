#include<iostream>
using namespace std;
long long int n , d ;
int cel( long long int a ,long long int b)
{
    if ( a%b == 0 )
    return a/b ;
    else return (a/b) + 1 ;
}
void solve()
{
cin>>n>>d ;
if ( d<=n)
{
    cout<<"YES";
}
else
{
    for ( long long int x = 1 ; x<=n ; x++)
    {
        if ( x + cel(d , x+1) <= n )
        {
            cout<<"YES" ;
            return;
        }
    }
cout<<"NO";
 
}
 
}
int main()
{
    int t ; 
    cin>>t ;
    while(t--)
    {
        solve();
        cout<<endl;
    }
}