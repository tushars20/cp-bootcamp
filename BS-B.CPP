#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n , k ;
    cin>>n>>k ;
    vector <pair<int , int > >v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second ;
    }
    for ( int i=0 ; i<n ; i++)
    {
        for ( int j = i+1 ; j<n ; j++)
        {
            if ( v[i].first < v[j].first || (( v[i].first == v[j].first) && (v[i].second > v[j].second))  )
            {
                pair<int , int> p = v[i] ;
                v[i] = v[j];
                v[j] = p ;
            }
        }
    }
                 
    int x = v[k-1].first ;
    int y = v[k-1].second ;
    int count =0 ;
    for (int i = 0; i < n; i++)
    {
        if ( x==v[i].first && y == v[i].second)
        count++ ;
    }
    cout<<count;
 
}