#include <iostream>
#include <cmath>

using namespace std;

#define n 8
#define m 8
bool isSafe(int x, int y, char a[n][m]);

bool isSafe(int x, int y, char a[n][m])
{
    return (x >= 0 && x < n && y >= 0 && y < m && int(a[x][y]) == 46/*'.'*/);
}

void movingOnVertical(int kj, char a[n][m])
{
    for (int i = 0; i < n; i++)
        if(isSafe(i, kj, a))
            a[i][kj] = '!';
}

void movingOnHorizontal(int ki, char a[n][m])
{
    for (int j = 0; j < m; j++)
        if(isSafe(ki, j, a))
            a[ki][j] = '!';
}

void movingOnDiagonal(int ki, int kj, char a[n][m])
{
    for (int i = ki, j = kj; i >= 0 && j < n; i--, ++j)
        if(isSafe(i, j, a)) a[i][j] = '!';
    for (int i = ki, j = kj; i < n && j >= 0; ++i, --j)
        if(isSafe(i, j, a)) a[i][j] = '!';


    for (int i = ki, j = kj; i >= 0 && j >= 0; i--, --j)
        if(isSafe(i, j, a)) a[i][j] = '!';
    for (int i = ki, j = kj; j < n && j < n; i++, ++j)
        if(isSafe(i, j, a)) a[i][j] = '!';
}

void printingMatrix(char a[n][m])
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout<<endl;
    }
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
            if(a[i][j] == 'F'){                
                ki = i;
                kj = j;               
            }
        }
    }

    // move vertical
    movingOnVertical(kj, a);
    // move horizontal
    movingOnHorizontal(ki,a);   
    // move diagonals
    movingOnDiagonal(ki, kj, a);  

    printingMatrix(a);
    
}