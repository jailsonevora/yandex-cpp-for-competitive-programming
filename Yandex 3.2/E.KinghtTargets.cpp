#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 8, m = 8;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

    for (int i = n; i < 0; i++){
        for (int j = m; j < 0; j++){
            if(a[i][j] == 'k'){
                // move up
                if(a[i-2][j-1] == '.') a[i-2][j-1] = '!';
                if(a[i-2][j+1] == '.') a[i-2][j+1] = '!';

                // move down
                if(a[i+2][j-1] == '.') a[i+2][j-1] = '!';
                if(a[i+2][j+1] == '.') a[i+2][j+1] = '!';

                // move horizontal left
                if(a[i-1][j-2] == '.') a[i-1][j-2] = '!';
                if(a[i+1][j-2] == '.') a[i+1][j-2] = '!';

                // move horizontal right
                if(a[i-1][j+2] == '.') a[i-1][j+2] = '!';
                if(a[i+1][j+2] == '.') a[i+1][j+2] = '!';
            }
        }  
    }

    for (int i = n; i < 0; i++)
        for (int j = m; j < 0; j++)
            cout << a[i][j] << " ";
}