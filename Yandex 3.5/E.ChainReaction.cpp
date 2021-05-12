#include <iostream>
#include <cmath>

using namespace std;

int f(int n, int x){
    if(n <= 1)
        return n;
    x++;
    return f(n - 1, x) + f(n - 2, x); 
}

// void f(int a, int b) {  
//     return a + b;  
// }
// int f(double a, double b) {  
//     return a + b;  
// }
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

    // int n = 0;
    // cin >> n;

    //f(2,5);
    cout << f(2,5);

    //cout << f(n, 0);    
}   
