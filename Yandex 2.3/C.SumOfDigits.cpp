#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, sum = 0;
    cin >> a;

    a = abs(a);

    int total_digts = ((int)log10(a) + 1);


    for(; total_digts > 0; total_digts--){
        int lastDigits = a % 10;   
        sum += lastDigits;
        a /= 10; 
    }
    cout << sum;
}