#include<iostream>
#include<string>
using namespace std ;
int count(string s, char c)
{
    // Count variable
    int res = 0;
  
    for (int i=0;i< s.size();i++)
  
        // checking character in string
        if (s[i] == c)
            res++;
  
    return res;
}
int main()
{
    string a ;
    getline( cin , a);
    string b ;
    getline ( cin , b);
    string c ;
    getline ( cin , c );
    a.append(b);
    for ( char x = 65 ; x<=90 ; x++)
    {
        if ( count(a , x)!=count( c , x)) 
        { cout<<"NO" ;
        return 0 ;}
        else{
            continue;
        }
    }
    cout<<"YES" ;
}