#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 5;

    int a[n];
    cin.clear();

    for (int i = 0; i < n; ++i)
            cin >> a[i];

    int aTemp[n];
    int t = 6; 
    for(int i = 0; i < n; ++i){
        if(i == (n-1))
            aTemp[i] = t;
        else{
            if(t <= a[i]){
                aTemp[i] = t;
                t = a[i];
            }    
            else if(t > a[i])
                aTemp[i] = a[i];
        }    
    }

    for(int i = 0; i < n; ++i)
	    a[i] = aTemp[i];

    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
}

