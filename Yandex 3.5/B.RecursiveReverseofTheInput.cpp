#include <iostream>
#include <cmath>

using namespace std;

void f(int n){
    if(n <= 0)
        return;
    cout << n << " ";
    f(n - 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0;
    cin >> n;

    f(n);    
}   
