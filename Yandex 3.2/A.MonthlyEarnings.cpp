#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0, m = 0;
    cin >> n >> m;

    int a[n][m];
    cin.clear();

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

    for (int j = 0; j < m; ++j){
        long long sum = 0;
        for (int i = 0; i < n; ++i) 
            sum +=a[i][j];
        cout << sum << " ";
    }
}