#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int subA[] = {1,2,3};
    int n = 5;
    int *ptr = &subA[2], *ptr2 = &subA[1], *ptr3 = &subA[0];
    int *a[n] = {ptr, ptr2, ptr3};


    int *ptrBegin = a[0]; 
    int *ptrEnd = a[n];
    int answer = 0;
    for (; ptrBegin != ptrEnd ; ++ptrBegin, ++answer);

    for (int i = 0; i < n; i++)
        cout << answer << "\n";
}   
