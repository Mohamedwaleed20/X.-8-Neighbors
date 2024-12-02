#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n , m  ;
    cin >> n >> m ;
    char arr[n][m];
    for(int i = 0 ; i < n ; i++ )
    {
        for(int j = 0 ; j < m ; j++ )
        {
            cin >> arr[i][j];
        }
    }
    int x , y ;
    cin >> x >> y ;
    x--;
    y--;
    if(arr[x - 1][y -  1]!='.'&&arr[x - 1][y]!='.'
    &&arr[x - 1][y +  1]!='.'&&arr[x][y -  1]!='.'&&
    arr[x][y + 1]!='.'&&arr[x + 1][y -  1]!='.'&&arr[x + 1][y +  1]!='.'&&arr[x + 1][y]!='.')
    {
        cout << "yes" ;
    }
    else
    {
        cout << "no" ;
    }

    return 0;
}
