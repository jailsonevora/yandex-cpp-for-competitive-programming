#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0, count = 0;
    cin >> n;

    int qi[n];
    cin.clear();
    for (int i = 0; i < n; ++i)
        cin >> qi[i]; 
    
    int pi[n];
    cin.clear();
    for (int i = 0; i < n; ++i)
        cin >> pi[i]; 

    for (int i = 0; i < n; ++i)
        if (pi[i] - qi[i] >= 2)
            count++;
    cout << count;      
}