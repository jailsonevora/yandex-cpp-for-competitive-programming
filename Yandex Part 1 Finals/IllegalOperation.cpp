#include <iostream>  
 
using namespace std;  
 
int main() {  
    cout.setf(ios::fixed);  
    cout.precision(10);  
 
    long double a1, b1, c1, a2, b2, c2;  
    cin >> a1 >> b1 >> c1;  
    cin >> a2 >> b2 >> c2;  
    long double d = a1 * b2 - a2 * b1;  
    long double dx = c2 * b1 - c1 * b2;  
    long double dy = a2 * c1 - a1 * c2;  
 
    cout << dx / d << " " << dy / d << endl;  
}

// a1,c2,a2 = 5
// b2,b1,c1 = 1


