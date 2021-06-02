#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

// To return char for a value. For example '2'
// is returned for 2. 'A' is returned for 10. 'B'
// for 11
long long val(char c)
{
    if (c >= '0' && c <= '9')
        return (long long)c - '0';
    else
        return (long long)c - 'A' + 10;
}

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
void baseKtoBaseT(string n, long long baseK, long long baseT)
{
    long long len = n.size();
    long long power = 1; // Initialize power of base
    long long num = 0;  // Initialize result
    long long i; 
    string res;
 
    // Decimal equivalent is str[len-1]*1 +
    // str[len-2]*base + str[len-3]*(base^2) + ...
    for (i = len - 1; i >= 0; i--)
    {
        // A digit in input number must be
        // less than number's base
        if (val(n[i]) >= baseK){
            printf("Invalid Number\n");
            break;
        }
 
        num += val(n[i]) * power;
        power = power * baseK;
    }
 
    // Convert input number is given base by repeatedly
    // dividing it by base and taking remainder
    while (num > 0)
    {
        res.insert(0,1,reVal(num % baseT));
        num /= baseT;
    }
    cout << res;
}

int main(){

    long long k;
    cin >> k;

    cin.clear();

    long long t;
    cin >> t;
    
    string n;
    cin >> n;

    baseKtoBaseT(n, k, t);
}