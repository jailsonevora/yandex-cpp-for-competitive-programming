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
    int t = 6; 
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            if(a[i] < a[j]){ 
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;                
            }
}

