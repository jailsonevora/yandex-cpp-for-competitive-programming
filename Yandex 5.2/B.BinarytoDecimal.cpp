#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

long long binaryToDecimal(long long n)
{
    long long temp = n, base = 1, decimal = 0;
    while (temp) {
 
        long long lastD = temp % 10;
        temp = temp / 10;

        decimal += lastD * base;

        base = base * 2;
    }
    
    return decimal;
}
long long binaryToDecimalString(long long n)
{   
    string num = std::to_string(n);
    long long dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    long long base = 1;
 
    long long len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    } 
    return dec_value;
} 

int main(){

    long long n;
    cin >> n;
    cout << binaryToDecimalString(n);
}