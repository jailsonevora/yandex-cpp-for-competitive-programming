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
    for (int *ptrBegin = a[0], *ptrEnd = a[n-1]; ptrBegin != ptrEnd; ++ptrBegin){
        for (int *ptrJ = ptrBegin+1; ptrJ != ptrBegin; ++ptrJ){
            if(*ptrBegin != *ptrJ)
                ++ans;
        }
    }
    
    cout << ans << "\n";
}   
