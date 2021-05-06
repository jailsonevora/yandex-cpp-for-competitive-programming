#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a[] = {10, 324, 45, 90, 9808};
    int n = sizeof(a) / sizeof(a[0]);

    int ans = a[0];
    for(int i = 0; i < n ; ++i)
        if(ans < a[i]) ans = a[i];
      
    cout << ans;   
}