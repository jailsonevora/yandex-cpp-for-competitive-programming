#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 5, ans = 0;
    int *a1 = NULL, *a2 = &n, *a3 = &n;

    if(a1 != NULL)
        ans++;
    if(a2 != NULL)
        ans++;
    if(a3 != NULL)
        ans++;    

    cout << ans;
}   
