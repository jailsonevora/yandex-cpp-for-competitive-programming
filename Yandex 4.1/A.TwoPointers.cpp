#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a = 10, b = 5;
    int *ptr1 = &a;
    int *ptr2 = &b;

    ptr1 = ptr2;   

    cout <<  "*ptr1: " << ptr1 <<" *ptr2: " << ptr2;
}   
