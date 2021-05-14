#include <iostream>
#include <cmath>

using namespace std;

void f(int &a){
    a=((a)*2);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a = 4;
    cout << "a before: " << a << "\n";    
    
    f(a);
    cout << "a after: " << a << "\n";
}   
