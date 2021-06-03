#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    int n;
    long long a;
    cin >> a;
    cin >> n;
    
    if(n & (n+1))
        cout << (a >> n);
}