#include <iostream>
#include <cmath>

using namespace std;

//by reference
void f(int &a){
    a=((a)*2);
}

//by reference with pointer
void f(int *a){
    *a=((*a)*2);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a = 4;
    cout << "a before: " << a << "\n";    
    
    //call by reference
    f(a);
    //call by reference with pointer
    //f(&a);

    cout << "a after: " << a << "\n";
}   
