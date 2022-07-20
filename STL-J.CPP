#include<iostream>
#include<string>
using namespace std;
long long int occur( string s , char c)
{
   long long int count = 0 ;
    for ( long long int i=0 ; i<s.length() ; i++)
    {
        if ( c==s[i])
        count++ ;
    }
    return count ;
}
string find( string s ,string s2, long long int k , string s3)
{
    long long int a[26];
    long long int i=0 ;
   long long int l = s.length();
    for ( char c = 'a' ; c<='z' ; c++)
    {
         a[i] = occur(s , c);
         i++ ;
    }
    for ( long long int i=0 ; i<26 ; i++)
    {
        if ( (a[i]<k || a[i]%k!=0 ) && a[i]!=0)
        {
            return "-1";
        }
        else 
        {continue;}
    }
   long long int p = 0 ;
        for ( char c = 'a' ; c<='z' ; c++)
        {
            for ( long long int j = 0 ; j< occur(s ,c)/k ; j++)
            {
                s2[p] = c ;
                p++ ;
                 if ( p==(l/k)  ){break;}
            }
        }
 
        for (long long int i=0 ; i<k ; i++)
        {
           s3.append(s2 , 0 , l/k );
        }
        s2.erase();
        return s3 ;
}
int main()
{
    string s ;
    string s2 , s3 ;
    long long int k ;
    cin>>k;
    cin>>s ;
    long long int l = s.length() ;
    s2.resize(l/k);
    cout<<find(s ,s2, k , s3);
}