#include <iostream>
#include <cmath>

using namespace std;

string f(int n){
    
    if(n == 0)
        return "it’s not my fault";
    return " Sir," + f(n - 1) + " because " + f(n - 1) + " sorry";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0;
    cin >> n;

    cout << f(n);    
}
