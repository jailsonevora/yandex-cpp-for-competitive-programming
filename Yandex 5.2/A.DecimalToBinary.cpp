#include <iostream>
#include <cmath>

using namespace std;

void decToBinary(long long n)
{
    long long binaryNum[32];
    for (int j = 0; j < 32; j++)
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
        int rem = N % 2;
        unsigned long long c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
        cnt++;
    }
 
    return B_Number;
}

int decToBinary(long long n)
{
    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
}

int main(){

    long long n;
    cin >> n;
    cout << decToBinary(n);
}