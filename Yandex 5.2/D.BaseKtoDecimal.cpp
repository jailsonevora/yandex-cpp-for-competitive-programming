#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

// To return value of a char. For example, 2 is
// returned for '2'.  10 is returned for 'A', 11
// for 'B'
int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}
 
// Function to convert a number from given base 'b'
// to decimal
void baseToDeci(string str, int base)
{
    
    int len = str.size();
    int power = 1; // Initialize power of base
    int num = 0;  // Initialize result
    int i;
 
    // Decimal equivalent is str[len-1]*1 +
    // str[len-2]*base + str[len-3]*(base^2) + ...
    for (i = len - 1; i >= 0; i--)
    {
        // A digit in input number must be
        // less than number's base
        if (val(str[i]) >= base)
        {
           printf("Invalid Number");
           return -1;
        }
 
        num += val(str[i]) * power;
        power = power * base;
    }
 
    cout << num;
}

int main(){

    string n;
    cin >> n;

    cin.clear();

    int k;
    cin >> k;

    baseToDeci(n, k);
}