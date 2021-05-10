#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 5;

    int a[n];
    cin.clear();

    for (int i = 0; i < n; ++i)
            cin >> a[i];

    int aTemp[n];
    int t = 3; 
    for(int i = 0; i < n; ++i){
        if(t >= a[i]){
            aTemp[i] = t;
            t = a[i];
        }    
        else
            aTemp[i] = a[i];
    }

    for (int i = 0; i < n; ++i)
        cout << aTemp[i] << " ";
}