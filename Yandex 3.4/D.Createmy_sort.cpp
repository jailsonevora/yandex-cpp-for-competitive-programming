#include <iostream>
#include <cmath>

using namespace std;

int swap(int *i, int *j){
    int temp = *j;
    *j = *i;
    *i = temp;
    return 1;
}

void my_sort (int n, int a[]){

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

    int n = 0;
    cin >> n;  

    int a[n];
    cin.clear();
    for (int i = 0; i < n; ++i)
            cin >> a[i];  
    my_sort(n, a);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";    
}   
