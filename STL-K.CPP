#include<iostream>
using namespace std;
int main()
{
  int n ; 
  cin>>n ;
for ( int i=0 ; i<= n ; i++)
{
    for ( int j=0 ; j<2*(n-i) ; j++ )
    {
        cout<<' ';
    }
    if ( i==0)
    {
        cout<<i ;
    }
    else 
    {
        int s = 0 ;
        for ( int j=0 ; j<=i ; j++ )
        {cout<<s++<<' ' ;}
        s-- ;
        for ( int j=0 ; j<i ; j++ )
        {
            if ( j== i-1)
            {cout<<--s ;}
            else {cout<<--s<<' ';}
        }
    }
cout<<endl ;
}
 
for ( int i = n-1 ; i>=0 ; i--)
{
    for ( int j =2*(n-i-1) + 1 ; j>=0 ; j--  )
    { cout<<' ';}
    if ( i==0){cout<<i;}
    else
    {
        int s = 0 ;
        for ( int j = 0 ; j<= i ; j++ )
        { cout<<s++<<' ';}
        s-- ;
        for ( int j=0 ; j<i ; j++)
        {
            if ( j== i-1)
            { cout<<--s;}
            else{cout<<--s<<' ';}
        }
    }
    cout<<endl;
}
}