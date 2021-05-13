#include <iostream>
#include <cmath>
#include <algorithm>
#include <array>

using namespace std;

void swap(int ar[], int i, int j){
    int temp = ar[j];
    ar[j] = ar[i];
    ar[i] = temp;
}

bool is_sorted(int a[], int n){
    if (n == 1 || n == 0)
        return true;
    if (a[n - 1] < a[n - 2])
        return false;
    return is_sorted(a, n - 1);
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

    //With C++ STL
    // while (cin >> a >> b) {
    //     std::swap(ar[a-1],ar[b-1]);
    //     (std::is_sorted(ar,ar+n)) ? cout << "Sorted!\n" : cout << "Unsorted!\n";
    // }

    //Made from scratch   
    while (i <= q) {
        cin >> a >> b;
        swap(ar, a-1,b-1);
        (is_sorted(ar,n)) ? cout << "Sorted!\n" : cout << "Unsorted!\n";  
        i++;
    } 
}
