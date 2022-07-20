#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void swap( int*a , int*b)
{
    int temp ;
    temp = *a ;
    *a = *b ;
    *b = temp ;
}
int main()
{
    int n ;
    cin>>n ;
    vector<int>v(n);
    int x = n ;
    int i=0 ;
    while(x--)
    {
        cin>>v[i];
        i++ ;
    }
    i=0 ;
    if (n==2)
    {
        cout<<0<<endl ;
        while (n--)
        {
            cout<<v[i]<<' ';
            i++ ;
        }
        return 0 ;
    }
    sort(v.begin() , v.end());
    int j=0 ;
    for (  i=0 ; j<n/2 ;  i = i+2 )
    {
        swap( &v[i] , &v[i+1]);  
        j++ ;
    }
    if ( n%2==0)
    {
        cout<<(n/2) - 1 ;
    }
    else
    {
        cout<<n/2 ;
    }
    cout<<endl;
    i = 0 ;
    while ( n--)
    {
cout<<v[i]<<' ';
i++ ;
    }
 
 
}