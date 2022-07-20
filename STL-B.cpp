#include<iostream>
#include<string>
using namespace std;
int check(string s1 , string s2 )
{
    int n = s1.length(); ;
    for ( int i=0 ; i< n ; i++ )
    {
        if ( s1[i] >= 'a' && s1[i] <='z')
        {
            s1[i] = s1[i] - 32 ;
        }
 
        else {continue;}
    }
    for ( int i=0 ; i< n ; i++ )
    {
    
        if ( s2[i] >= 'a' && s2[i] <='z')
        {
            s2[i] = s2[i] - 32 ;
        }
        else {continue;}
    }
   if(s1.compare(s2) < 0) { return -1 ;}
   else if (s1.compare(s2) > 0) { return 1;}
   else {return 0;}
}
int main()
{
    string s1 , s2;
    cin>>s1;
    cin>>s2;
    cout<<check(s1 , s2);
 
}