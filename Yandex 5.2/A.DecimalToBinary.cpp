#include <iostream>
#include <cmath>

using namespace std;

// void decToBinary(long long n)
// {
//     long long binaryNum[32];
//     for (int j = 0; j < 32; j++)
//         binaryNum[j] = -1;
 
//     int i = 0;
//     while (n > 0) {
 
//         binaryNum[i] = n % 2;
//         n = n / 2;
//         i++;
//     }

//     for (int j = i - 1; j >= 0; j--)
//         cout << binaryNum[j];
// }

#define ull unsigned long long int

void decimalToBinary(int N)
{
 
    // To store the binary number
    ull B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        ull c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
 
        // Count used to store exponent value
        cnt++;
    }
 
    return B_Number;
}

int main(){

    long long n;
    cin >> n;
    decToBinary(n);
}