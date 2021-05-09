#include <iostream>
#include <cmath>

using namespace std;

#define n 6
#define m 6

bool isSafe(int x, int y, char a[n][m]);

bool isSafe(int x, int y, char a[n][m])
{
    return (x >= 0 && x < n && y >= 0 && y < m
            && a[x][y] == '.');
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    char a[n][m];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(a[i][j] == 'k'){                
                // move up to the left
                if(isSafe(i-2, j-1, a))
                    a[i-2][j-1] = '!'; a[i-2][j-1] = '!';
                // move up to the right
                if(isSafe(i-2, j+1, a))
                    a[i-2][j+1] = '!'; a[i-2][j+1] = '!';

                // move down to the left
                if(isSafe(i+2, j-1, a))
                    a[i+2][j-1] = '!'; a[i+2][j-1] = '!';
                // move down to the right
                if(isSafe(i+2, j+1, a))
                    a[i+2][j+1] = '!'; a[i+2][j+1] = '!';                
            }
        }  
    }

    for (int j = 0; j < m; j++){
        for (int i = 0; i < n; i++){
            if(a[i][j] == 'k'){                
                // move horizontal to the left up 
                if(isSafe(i-1, j-2, a))
                    a[i-1][j-2] = '!'; a[i-1][j-2] = '!';
                // move horizontal to the left down
                if(isSafe(i+1, j-2, a))
                    a[i+1][j-2] = '!'; a[i+1][j-2] = '!';

                // move horizontal to the right up 
                if(isSafe(i-1, j+2, a))
                    a[i-1][j+2] = '!'; a[i-1][j+2] = '!';
                // move horizontal to the right down
                if(isSafe(i+1, j+2, a))
                    a[i+1][j+2] = '!'; a[i+1][j+2] = '!';                 
            }
        }  
    }

    

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout<<endl;
    }
}


                // // move up
                // int iTemp = i;
                // int jTemp = j;
                // if(a[iTemp-2][jTemp-1] == '.' && (iTemp-2) >= 0 && (jTemp-1) >= 0 && (iTemp-2) < n && (jTemp-1) < m) a[iTemp-2][jTemp-1] = '!';
                // if(a[iTemp-2][jTemp+1] == '.' && (iTemp-2) >= 0 && (jTemp+1) >= 0 && (iTemp-2) < n && (jTemp+1) < m) a[iTemp-2][jTemp+1] = '!';

                // // move down
                // if(a[iTemp+2][jTemp-1] == '.' && (iTemp+2) >= 0 && (jTemp-1) >= 0 && (iTemp+2) < n && (jTemp-1) < m) a[iTemp+2][jTemp-1] = '!';
                // if(a[iTemp+2][jTemp+1] == '.' && (iTemp+2) >= 0 && (jTemp+1) >= 0 && (iTemp+2) < n && (jTemp+1) < m) a[iTemp+2][jTemp+1] = '!';

                // // move horizontal left
                // if(a[iTemp-1][jTemp-2] == '.' && (iTemp-1) >= 0 && (jTemp-2) >= 0 && (iTemp-1) < n && (jTemp-2) < m) a[iTemp-1][jTemp-2] = '!';
                // if(a[iTemp+1][jTemp-2] == '.' && (iTemp+1) >= 0 && (jTemp-2) >= 0 && (iTemp+1) < n && (jTemp-2) < m) a[iTemp+1][jTemp-2] = '!';

                // // move horizontal right
                // if(a[iTemp-1][jTemp+2] == '.' && (iTemp-1) >= 0 && (jTemp+2) >= 0 && (iTemp-1) < n && (jTemp+2) < m) a[iTemp-1][jTemp+2] = '!';
                // if(a[iTemp+1][jTemp+2] == '.' && (iTemp+1) >= 0 && (jTemp+2) >= 0 && (iTemp+1) < n && (jTemp+2) < m) a[iTemp+1][jTemp+2] = '!';
            