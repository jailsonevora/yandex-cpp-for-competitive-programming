#include <iostream>

using namespace std;

int main(){

    int c, count; char ch;
    cin >> c;
    for(ch ='a', count = 1; ch <='z'; ch++, count++)
        if (count == c)
                break;
    cout << ch;
}