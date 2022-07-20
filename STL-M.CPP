#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string get( string s , string s2 , string s3)
{
    for ( int i=0 ; i< s.length() ; i++)
    {
        if ( s[i]>=65 && s[i]<= 90)
        {
            s[i] = s[i] + 32 ;
        }
    }
    int count = 0 ;
    for ( int i=0 ; i< s.length() ; i++)
    {
        if ( s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='y' )
        {
            s[i] = '0' ;
            count++ ;
        }
    }
    int a = (s.length() - count);
    s2.resize(a);
    int j= 0 ;
    for ( int i=0 ; i<s.length() ; i++)
    {
        if ( s[i]!='0')
        {
            s2[j] = s[i] ;
            j++ ;
        }
    }
s3.resize(2*a);
int p=0 ;
for ( int i=0 ; i<2*a ; i++)
{
    if ( i==0 || i%2 ==0)
    {
        s3[i] = '.';
    }
    else 
    {
        s3[i] = s2[p];
        p++ ;
    }
}
    return s3 ;
}
int main()
{
    string s;
    cin>>s ;
    string s2 ;
    s2.resize(100);
    string s3 ;
    s3.resize(100);
    cout<<get(s , s2 , s3);
}