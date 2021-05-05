#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long double a, n;  
    long double p = 0;  
    cin >> a >> n;

    for (int i = 1; i <= n; i++)
        p = p + (pow(a,i));
    cout << fixed << std::setprecision(0) << (p+1);     
}