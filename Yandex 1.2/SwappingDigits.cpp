#include <iostream>

using namespace std;

int main(){

    long long a, k, twoD, threeD, fourD;

    cin >> a;
    fourD = (a%10);
    a /= 10;
    threeD = (a%10);
    a /= 10;
    twoD = (a%10);
    a /= 10;
    
    a = a*10+threeD;
    a = a*10+twoD;
    a = a*10+fourD;
    
    cout << twoD << " - " << threeD << " - " << fourD << " - " << a << endl; 

}