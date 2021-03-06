#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 5, k = 2;
    int a[n] = {2,4,6,8,9};
    int *ptr = &a[k];

    int *ptrBegin = (ptr - k); 
    int *ptrEnd = (ptr + n);
    for (int i = n; ptrBegin != ptrEnd ; ++ptrBegin, --i)
        *ptrBegin = i;

    for (int i = 0; i < n; i++)
        cout <<  "a["<<i<<"]: " << a[i] <<" ptr: " << *ptr << "\n";
}   
