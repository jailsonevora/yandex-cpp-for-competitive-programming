#include <iostream>
#include <cmath>
#include <iomanip> 
#include <vector>
//#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0;
    cin >> n;

    int a[n];
    cin.clear();

    vector<int> aTempOdd, aTempEven;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        (a[i] % 2 == 0) ? aTempEven.push_back(a[i]) : aTempOdd.push_back(a[i]);
    
    for (auto i = aTempOdd.begin(); i != aTempOdd.end(); i++)
        aTempEven.push_back(*i);

    for (int i = 0; i < n; i++)
        cout << aTempEven[i] << " ";
}