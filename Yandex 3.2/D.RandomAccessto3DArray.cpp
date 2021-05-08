#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m = 0, n = 0, l = 0;
    cin >> l >> m >> n;

    // 3D array row * column * layer
    int a[l][m][n];
    cin.clear();
    for (int k = 0; k < l; ++k)
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                        cin >> a[k][i][j];

    // num of queries
    cin.clear();
    int q = 0;
    cin >> q;

    // read queries
	cin.clear();
    while(cin >> l >> m >> n)
    	cout << a[l-1][m-1][n-1] << " ";
}