#include <iostream>
#include <cmath>

using namespace std;

int f(int n, int x){
    if(n <= 1)
        return n;
    x++;
    return f(n - 1, x) + f(n - 2, x); 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0;
    cin >> n;

    cout << f(n, 0);    
}   
