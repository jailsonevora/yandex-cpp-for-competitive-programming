#include <iostream>

using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    if ((a < 0) == (b < 0)) { 
        int sumLSD = (int) (a % 10 + b % 10);
        long long sumMSDs = a / 10 + b / 10 + sumLSD / 10;
        sumLSD %= 10;
        if (sumMSDs) {
            cout << sumMSDs;
            sumLSD = abs(sumLSD); 
        }
        cout << sumLSD;
    } 
    else{
        cout << a + b;
    }
}