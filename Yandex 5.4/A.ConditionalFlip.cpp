#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    int a, n;
    cin >> a;
    cin >> n;

    cout << (a >> n);
}