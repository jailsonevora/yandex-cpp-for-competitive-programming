#include <iostream>
#include <cmath>

using namespace std;

// int f(int a[], int left, int right /*int n*/){
    
//     //int mid = (n-1) / 2;
//     int mid = left + ((right - left) / 2);

//     if (mid == 0) return 0;

//     if (right > left)
//         return f(a, mid + 1, right);
//     else 
//         return f(a, left, mid - 1);
// }

void f(int n, int a[]){
    int mid = (n - 1) / 2;

    cout << a[mid] << " ";
    if(mid == 0)
        return;    
    if (mid < (sizeof(a)-1)) f(mid + (sizeof(a)-1), a);
    //if (mid == n) f(n, mid - 1, a);
        
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0;
    cin >> n;

    cin.clear();

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    //cout << f(a, 0, n-1);     
    //cout << a[f(a, i)];
    f(n, a);
}
