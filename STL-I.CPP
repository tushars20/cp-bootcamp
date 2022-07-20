#include<iostream>
#include<string>
using namespace std;
int main()
{
    string w = "hello";
    string s ;
    cin>>s ;
    int p=0 , count = 0 ;
 
    for ( int i=0 ; i<s.length() ; i++)
    {
        if ( s[i] == w[p])
        {
            count++ ;
            p++ ;
        }
    }
    if ( count==5){cout<<"YES";}
    else {cout<<"NO";}
}