#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    
    unsigned int max = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    cout << count;
}