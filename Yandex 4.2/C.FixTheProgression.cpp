#include <iostream>
#include <cmath>

using namespace std;

void f(int &a, int &b, int &c){

    int artBA = (b - a), artCB = (c - b);

    if(artBA != artCB)
        c += (artBA - artCB);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a = 1, b = 4, c = 8;   

    f(a, b, c);
    cout << "a: "<< a << " b: " << b << " c: " << c <<"\n";
}   
