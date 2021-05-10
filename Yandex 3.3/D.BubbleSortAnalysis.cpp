#include <iostream>
#include <cmath>

using namespace std;

int swap(int *i, int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0, numOfSwap = 0;
    cin >> n;

    int a[n];
    cin.clear();

    for (int i = 0; i < n; ++i)
            cin >> a[i];

    for(int i = 0; i < (n - 1); ++i){
        int swapped = 0;
        for(int j = 0; j < (n - i - 1); ++j)
            if(a[j] > a[j+1]){
                numOfSwap += swap(&a[j], &a[j+1]);
                swapped = 1;
            }
        if (swapped == 0)
            break;
    }

    cout << numOfSwap;
}   

