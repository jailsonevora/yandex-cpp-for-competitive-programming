#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

// To return value of a char. For example, 2 is
// returned for '2'.  10 is returned for 'A', 11
// for 'B'
long long val(char c)
{
    if (c >= '0' && c <= '9')
        return (long long)c - '0';
    else
        return (long long)c - 'A' + 10;
}
 
// Function to convert a number from given base 'b'
// to decimal
void baseKtoBaseT(string str, long long baseK, long long baseT)
{
    
    long long len = str.size();
    long long power = 1; // Initialize power of base
    long long num = 0;  // Initialize result
    long long i;

    for (i = len - 1; i >= 0; i--)
    {
        // A digit in input number must be
        // less than number's base
        if (val(str[i]) >= baseK){
            printf("Invalid Number\n");
            break;
        }
 
        num += val(str[i]) * power;
        power = power * baseT;
    }
 
    cout << num;
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