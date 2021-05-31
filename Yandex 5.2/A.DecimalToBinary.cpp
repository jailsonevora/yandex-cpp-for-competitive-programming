#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

void decToBinaryV(long long n)
{
    long long binaryNum[256];
    for (int j = 0; j < 256; j++)
        binaryNum[j] = -1;
 
    int i = 0;
    while (n > 0) {
 
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}

long long decimalToBinary(long long n)
{
 
    // To store the binary number
    unsigned long long B_Number = 0;
    long long cnt = 0;
    while (n != 0) {
        int rem = n % 2;
        unsigned long long c = pow(10, cnt);
        B_Number += rem * c;
        n /= 2;
        cnt++;
    } 
    return B_Number;
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
    //cout << decToBinaryv(n);
    cout << decimalToBinaryS(n);
}