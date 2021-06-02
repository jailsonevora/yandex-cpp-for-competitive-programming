#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

// To return char for a value. For example '2'
// is returned for 2. 'A' is returned for 10. 'B'
// for 11
char reVal(long long num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}
 
// Function to convert a given decimal number
// to a base 'base' and
void deciToBase(long long n, long long base)
{
    string res;
 
    // Convert input number is given base by repeatedly
    // dividing it by base and taking remainder
    while (n > 0)
    {
        res.insert(0,1,reVal(n % base));
        n /= base;
    }
    cout << res;
}

int main(){

    long long n;
    cin >> n;
    cin.clear();

    long long k;
    cin >> k;

    deciToBase(n, k);
}