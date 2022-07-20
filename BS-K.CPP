#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t ;
     cin>>t ;
     cout<<fixed;
     cout.precision(10);
     while (t--)
     {
         int n , l ;
         cin>>n>>l ;
         vector<int>v(n);
         for ( int i= 0 ; i<n ; i++)
         {
             cin>>v[i];
         }
         double c1 = 0 ;
         double c2 = l ;
         int v1 =1 ;
         int v2 = 1 ;
         double ans=0 ;
         int i = 0 ;
         int j = n-1 ;
 
         while(i<=j)
         {
             double d1 = v[i] - c1 ;
             double d2 = c2 - v[j];
             double t1 = (d1*1.0)/v1 ;
             double t2 = (d2*1.0)/v2;
             if ( t1<=t2)
             {
                 c1+=d1 ;
                 c2-=1.0*v2*t1 ;
                 ans+=t1 ;
                 v1++ ;
                 i++ ;
             }
 
             else
             {
                 c2-=d2 ;
                 c1+=1.0*v1*t2;
                 ans+=t2;
                 v2++ ;
                 j--;
             }
         }
         double d = c2 - c1;
         v1+=v2;
         ans+= d/v1 ;
         cout<<ans<<endl;
     }
}