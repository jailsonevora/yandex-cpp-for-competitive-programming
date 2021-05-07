#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n = 0;

    cin >> n;

    int a[n];

    cin.clear();
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for(int i = n-1; i >= 0 ; --i)
        cout << a[i] << " ";
}