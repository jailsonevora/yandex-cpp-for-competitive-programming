#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    int n;
    long long a, r;

    cin >> a;
    cin >> n;
    
    if( (n) & (1 << a) == 0)
        cout << (a << n);
    
}