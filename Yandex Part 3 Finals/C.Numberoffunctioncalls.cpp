// For the given function list the order of function calls (excluding main()). Each function shall be denoted by its name.
// The answer shall be formatted as string consisting of uppercase English letters (like “ABACABA”).

#include <iostream>  
 
using namespace std;  
 
void D() {}  
void E() {}  
void C() {}  
 
void B() {  
    D();  
    E();  
}  
 
void A() {  
    B();  
    C();  
    B();  
}  
 
int main() {  
    A();  
    return 0;  

    //ABDECBDE
}
