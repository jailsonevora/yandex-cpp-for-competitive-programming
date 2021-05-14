#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 4;
    int subA[n] = {5,40,7};
    int *ptr = &subA[2], *ptr2 = &subA[1], *ptr3 = &subA[0];
    //int *a[n] = {&subA[2], &subA[1], &subA[0], &subA[2], &subA[0]};
    int *a[n] = {ptr2, ptr, ptr3, ptr};

    int ans = 0;
    for (int i = 0; i < n; ++i){
        for (int j = i+1;  j < n; j++){
            if(*a[i] != *a[j])
                ++ans;
        }
    }    
    ans=(n-ans);
    

    cout << ans << "\n";
}   
