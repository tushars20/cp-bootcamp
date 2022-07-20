#include<iostream>
#include<string>
using namespace std ;
int main()
{
    string a , b , c ;
    getline( cin , a);
    getline( cin , b);
int n = a.size();
for ( int i=0 ; i< n ; i++)
{
    if ( a[i] == b[i] )
    {
        cout<<0 ;
    }
    else
    {
        cout<<1 ;
    }
 
}
}