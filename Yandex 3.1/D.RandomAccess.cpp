#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0, qn, q1, q2, q3;
    cin >> n;

    int a[n];
    cin.clear();
    for (int i = 0; i < n; ++i)
        cin >> a[i]; 
    
    cin.clear();
    cin >> qn;

    cin.clear();
    while (cin >> q1)    
        cout << a[q1-1] << " ";
}