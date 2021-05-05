#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 0, count = 0; i <= 666; ++i, count++) {  
        while (i % 6 != 0) {  
            i = i + 1;  
        }  
        cout << count << "\n";  
    }
}
//111+1