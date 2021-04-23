#include <iostream>

using namespace std;

int main(){
    long long a, mod;
    cin >> a >> mod;
    cout << (a % mod + mod) % mod << endl;
}