#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0, m = 0;
    cin >> n;

    m = n;
    int a[n][m];
    cin.clear();

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

    int aTemp[n][m];
    for (int j = m-1; j >= 0; --j)
        for (int i = n -1; i >= 0; --i)
            cout << a[i][j] << " ";
}