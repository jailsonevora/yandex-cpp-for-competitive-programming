#include <iostream>

using namespace std;

int main(){

    int a1,a2,a3,a4, sum = 0;
    cin >> a1 >> a2 >> a3 >> a4;
    sum += (a1 == a2) || (a1 == a3) || (a1 == a4);
    sum += (a2 == a3) || (a2 == a4);
    sum += (a3 == a4);

    cout << 4-sum;
}