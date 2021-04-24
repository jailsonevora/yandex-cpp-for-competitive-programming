#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    
    const double PI = std::atan(1.0)*4;

    int n;
    cin >> n;

    if (n == 0)
       std:: cout << std::fixed << std::setprecision(0) << PI << endl;
    else
        std:: cout << std::fixed << std::setprecision(n) << PI << endl;
}