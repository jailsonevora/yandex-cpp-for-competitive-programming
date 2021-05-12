#include <iostream>  
using namespace std;  
 
void f(int n) { 
    if (n > 0) { 
        f(n - 1);  
        f(n - 2);  
    } 

    cout << 1 << " ";     
}  
 
int main() {  
    f(3);  
    return 0;  
}