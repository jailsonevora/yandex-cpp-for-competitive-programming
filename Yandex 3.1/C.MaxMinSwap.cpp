#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int min(int a[], int n);
int max(int a[], int n);

int min(int a[], int n){
    int ans = a[0];
    for(int i = 0; i < n ; ++i)
        if(a[i] < ans) ans = a[i];
    return ans; 
} 

int max(int a[], int n){
    int ans = a[0];
    for(int i = 0; i < n ; ++i)
        if(ans < a[i]) ans = a[i];
    return ans; 
} 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0, M = 0, m = 0;
    cin >> n;

    int b[n], a[n];
    cin.clear();
    for (int i = 0; i < n; ++i)
        cin >> b[i]; 
    
    M = max(b, n);
    m = min(b, n);

    for (int i = 0; i < n; ++i){        
        if(b[i] == m) 
            a[i] = M;
        else if(b[i] == M)
            a[i] = m;
        else if(a[i] < M && a[i] > m)
            a[i] = b[i];
    }

    for(int i = 0; i < n ; ++i)
        cout << a[i] << " ";    
}