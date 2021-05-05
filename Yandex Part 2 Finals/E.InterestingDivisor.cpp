#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long l, r, count = 0;

    cin >> l >> r;

    for (long long n = l; (n % (n+1) == 0) && n <= r; ++n)
        count++;

    cout << count;   
}