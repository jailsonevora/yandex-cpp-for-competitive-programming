#include <iostream>
#include <cmath>

using namespace std;

int hills(int n, int a[]){
    int count = 0;
    for(int i = 1; i <= n - 2; ++i)  
        if(a[i] > a[i-1] && a[i] > a[i+1])
            count++;
    return count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0;
    cin >> n;  

    int a[n];
    cin.clear();
    for (int i = 0; i < n; ++i)
            cin >> a[i];  
    
    cout << hills(n, a);    
}   
