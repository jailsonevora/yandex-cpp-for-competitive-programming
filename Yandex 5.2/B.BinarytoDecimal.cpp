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

string decimalToBinaryS(long long n)
{
    //finding the binary form of the number and
    //coneverting it to string.
    string s = bitset<64> (n).to_string();
     
    //Finding the first occurance of "1"
    //to strip off the leading zeroes.
    const auto loc1 = s.find('1');
     
    if(loc1 != string::npos)
        return s.substr(loc1);
     
    return "0";
}

int main(){

    long long n;
    cin >> n;
    cout << binaryToDecimal(n);
}