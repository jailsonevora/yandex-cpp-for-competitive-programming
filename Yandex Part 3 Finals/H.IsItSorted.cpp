#include <iostream>
#include <cmath>

using namespace std;

void swap(int *i, int *j){
    int temp = *j;
    *j = *i;
    *i = temp;
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

bool checkSorted(int a[], int n){
    if (n == 0 || n == 1)
        return true;
 
    for (int i = 1; i < n; i++)
        if (a[i - 1] > a[i])
            return false;
    return true; 
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

    int a = 0, b = 0, i = 1;
    while (i <= q) {
        cin >> a >> b;
        swap(ar[a-1],ar[b-1]);
        (checkSorted(ar, n)) ? cout << "Sorted!\n" ; : cout << "Unsorted!\n";  
        i++;
    }   
}