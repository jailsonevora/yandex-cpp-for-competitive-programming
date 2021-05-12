#include <iostream>
#include <cmath>

using namespace std;

int swap(int *i, int *j){
    int temp = *j;
    *j = *i;
    *i = temp;
    return 1;
}

void selectionSort(int *a, int n){
    for(int i = 0; i < n; ++i){
        int midI = i;
        for(int j = i+1; j < n; ++j)
            if(a[j] < a[midI])
                midI = j;
            swap(&a[midI], &a[i]);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0, q = 0, numOfSwap;
    cin >> n >> q;

    int ar[n];
    cin.clear();

    for (int i = 0; i < n; ++i)
            cin >> ar[i];

    cin.clear();

    int a = 0, b = 0;
    cin >> a >> b;

    selectionSort(ar,n);
    
    
    cout << numOfSwap;
}   

