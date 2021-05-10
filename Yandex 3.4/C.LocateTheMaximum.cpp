#include <iostream>
#include <cmath>

using namespace std;

int get_max(int n, int a[]){
    int max = a[0], maxP;
	for (int i = 0; i < n; i++)
        if (max < a[i]){
            max = a[i];
            maxP = i;
        }

    return maxP;           
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
    cout << get_max(n, a);
}   
