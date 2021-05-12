#include <iostream>
#include <cmath>

using namespace std;

//Which functions does not cause compilation errors nor implicit type conversion?
// void f(int a, int b) {  
//     return a + b;  
// }
int f(double a, double b) {  
    return a + b;  
}
// int f(int a, int b) {  
//     return a + b;  
// }
// long long f(int a, int b) {  
//     return a + b;  
// }
// void f(int a, int b) {  
//     int c = a + b;  
//     return;  
// }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    //f(2,5)
    cout << f(2,5);      
}   