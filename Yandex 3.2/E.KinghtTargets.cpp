#include <iostream>
#include <cmath>

using namespace std;

#define n 8
#define m 8
bool isSafe(int x, int y, char a[n][m]);

bool isSafe(int x, int y, char a[n][m])
{
    return (x >= 0 && x < n && y >= 0 && y < m && a[x][y] == '.');
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    char a[n][m];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

    int ki = 9, kj = 9;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(a[i][j] == 'K'){                
                ki = i;
                kj = j;               
            }
        }
    }

    // move up to the left
    if(isSafe(ki-2, kj-1, a)){
        a[ki-2][kj-1] = '!'; a[ki-2][kj-1] = '!';
    }
    // move up to the right
    if(isSafe(ki-2, kj+1, a)){
        a[ki-2][kj+1] = '!'; a[ki-2][kj+1] = '!';
    }

    // move down to the left
    if(isSafe(ki+2, kj-1, a)){
        a[ki+2][kj-1] = '!'; a[ki+2][kj-1] = '!';
    }
    // move down to the right
    if(isSafe(ki+2, kj+1, a)){
        a[ki+2][kj+1] = '!'; a[ki+2][kj+1] = '!';
    }

    // move horizontal to the left up 
    if(isSafe(ki-1, kj-2, a)){
        a[ki-1][kj-2] = '!'; a[ki-1][kj-2] = '!';
    }
    // move horizontal to the left down
    if(isSafe(ki+1, kj-2, a)){
        a[ki+1][kj-2] = '!'; a[ki+1][kj-2] = '!';
    }

    // move horizontal to the right up 
    if(isSafe(ki-1, kj+2, a)){
        a[ki-1][kj+2] = '!'; a[ki-1][kj+2] = '!';
    }
    // move horizontal to the right down
    if(isSafe(ki+1, kj+2, a)){
        a[ki+1][kj+2] = '!'; a[ki+1][kj+2] = '!'; 
    }   

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout<<endl;
    }
}