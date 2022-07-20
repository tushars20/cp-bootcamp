#include<iostream>
#include<string>
using namespace std ;
int main()
{
    long long int n ,x;
    cin>>n ;
    int count = 0 ;
    while ( n)
    {
        x = n%10 ;
        if ( x==4 || x==7 )
        count++ ;
 
        n = n/10 ;
    }
    if ( count == 4 ||count == 7 || count ==44 || count == 47 || count ==74 || count ==77)
    {
        cout<<"YES";
    }
    else { cout<<"NO";}
}