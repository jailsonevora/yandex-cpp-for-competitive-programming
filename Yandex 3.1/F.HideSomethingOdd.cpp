#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0;
    cin >> n;

    int a[n];
    cin.clear();

    int aTempOdd[n], aTempEven[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int countEvenEnd = 0;
    for (int i = 0; i < n; i++, countEvenEnd++)
        (a[i] % 2 == 0) ? aTempEven[i] = a[i] : aTempOdd[i] = a[i];
    
    for (int i = 0, j = countEvenEnd; i < n; i++, ++j)
        aTempEven[j] = aTempOdd[i];

    for (int i = 0; i < n; i++)
        cout << aTempEven[i] << " ";
    
    

    


}