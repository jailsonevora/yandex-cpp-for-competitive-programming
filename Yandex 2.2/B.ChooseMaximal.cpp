#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >>b;
    if(a > b) cout << a;
    else cout << b;
}