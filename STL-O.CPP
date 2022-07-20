#include<iostream>
#include<string>
using namespace std ;
void find( string s)
{
    int a = s.length();
    if ( a <= 10 )
    {cout<< s ;}
 
else
{
    cout<<s[0]<<a-2<<s[a-1];
}
 
}
int main()
{
    int n;
    cin>>n ;
    string s ;
    while ( n--)
    {
        cin>>s ;
        find(s);
        cout<<endl;
    }
}