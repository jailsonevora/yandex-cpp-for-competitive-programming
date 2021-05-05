#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long l, r, count = 0, n;

    cin >> l >> r;

    for (n = l; (n % (n+1) == 0) && n <= r; n++)
        count++;

    cout << fixed << setprecision(0) << count;   
}