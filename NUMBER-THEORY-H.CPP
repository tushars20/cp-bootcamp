#include<iostream>
#include<vector>
using namespace std;
bool isprime(int n)
{
    if ( n<2 || (n%2==0 && n!=2))
    return false ;
 
    for ( int i= 2 ; i<n/2 ; i++)
    {
        if (n%i == 0)
        return false;
    }
    return true;
}
int main()
{
    int n ; 
    cin>>n ;
    int count = 0 ;
    int r ;
    for ( int i= 2 ; i<=n ; i++)
    {
        r = 0 ;
        for ( int j=2 ; j<i ; j++)
        {
            if ( isprime(j) && i%j==0)
            {
                r++ ;
            }            
        }
 
        if ( r==2)
        {
            count++;
        }
    }
    cout<<count;
}