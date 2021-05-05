#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, sum = 0;

    cin >> a;
    for ( ; a >= 1; a--)
        sum += a;
    
    cout << sum;
}
