#include<iostream>
#include<vector>
using namespace std;
#define ll long long int
void find(ll n)
{
    int flag;
  for ( ll i=2 ; i*i<=n ; i++)
  {
       flag = 0 ;
      if (n%i==0)
      {
          flag = 1 ;
          cout<<n/i<<' '<<(i - 1)*n/i;
          return ;
      }
  }
  if ( flag == 0)
  cout<<1<<' '<<n-1;
 
 
 
}
int main()
{
    ll t,n ;
    cin>>t;
    while(t--)
    {
        cin>>n;
        find(n);
        cout<<endl;
    }
}