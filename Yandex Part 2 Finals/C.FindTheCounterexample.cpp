#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void prime(int n);

void prime(int n){
    if (n == 2 || (n % 2 == 1 && n != 9 && n != 1)) {  
        cout << "Prime" << endl;  
    } else {  
        cout << "Not Prime" << endl;  
    } 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int n;  
    // cin >> n;

    for (int i = 0; i < 100; ++i){
        cout << i << ": "; prime(i);      
    }
}