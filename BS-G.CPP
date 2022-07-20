//binary search
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
#define ll long long 
ll fact( ll x)
{
    ll a = pow(10 , 9) + 7 ;
  if (x==0)
  {
      return 1 ;
  }
  else
  {
      return ((x%a)*(fact(x-1)%a) )%a ;
  }
}
int main()
{
    ll a = pow(10 , 9) + 7 ;
    ll n , x , pos ;
    cin>>n>>x>>pos ;
    ll l = 0 ;
    ll r = n ;
    ll space = n-1 ;
    ll smaller = x -1 ;
    ll greater = n -x ;
    ll sum = 1 ;
    ll mid;
    while (l< r)
    {
        mid = (l + r) / 2;
        if ( mid == pos)
        {
            l = mid + 1 ;
        }
        else if (mid > pos)
        {
            sum = (sum*greater)%a ;
            greater-- ;
            space-- ;
            r = mid ;
        }
        else
        {
            sum = (sum*smaller)%a ;
            smaller-- ;
            space-- ;
            l = mid +1 ;
        }
    }
    if (l-1 == pos)
    {
        sum = (sum*fact(space))%a ;
    }
    else
    {
        sum =0 ;
    }
cout<<sum ;
 
 
}