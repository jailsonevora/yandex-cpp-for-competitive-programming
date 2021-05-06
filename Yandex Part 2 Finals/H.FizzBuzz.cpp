#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int fizz = 0, buzz = 0, surprise = 0, n;

    cin >> n;

    for (int i = 1; i <= n; i++){
        if(i % 3 == 0 && i % 5 != 0) fizz++;
        else if(i % 5 == 0 && i % 3 != 0) buzz++;
        else if(i % 3 == 0 && i % 5 == 0) surprise++;
    }

    cout << fizz <<" "<< buzz <<" "<< surprise;   
}