#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    long long d; 
    int total_digts;
    cin >> d;

    // for long long
    // the total number of digits - 1
    total_digts = (int)log10(d);
    d = (long long) (d / pow(10, total_digts));

    // small integer with loop
    // for (; d > 9; )
    //     d = d/1000;
    
    cout << d << endl;


}