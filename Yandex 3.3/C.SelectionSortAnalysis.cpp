#include <iostream>
#include <cmath>

using namespace std;

int swap(int *i, int *j){
    int temp = *j;
    *j = *i;
    *i = temp;
    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0, numOfSwap;
    cin >> n;

    int a[n];
    cin.clear();

    for (int i = 0; i < n; ++i)
            cin >> a[i];

    for(int i = 0; i < n; ++i){
        int midI = i;
        for(int j = i+1; j < n; ++j)
            if(a[j] < a[midI])
                midI = j;
        numOfSwap += swap(&a[midI], &a[i]);
    }
    
    cout << numOfSwap;
}   

