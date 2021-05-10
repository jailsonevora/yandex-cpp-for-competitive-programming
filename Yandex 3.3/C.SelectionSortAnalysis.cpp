#include <iostream>
#include <cmath>

using namespace std;

void swap(int *i, int *j){
    int temp = *j;
    *j = *i;
    *i = temp;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0;
    cin >> n;

    int a[n];
    cin.clear();

    for (int i = 0; i < n; ++i)
            cin >> a[i];

    for(int i = 0, midI = i; i < n; ++i){
        for(int j = 0; j < n; ++j)
            if(a[j] < a[midI])
                midI = j;
        swap(&a[midI], &a[i]);
    }
    
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
}   

