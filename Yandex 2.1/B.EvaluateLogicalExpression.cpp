#include <iostream>

using namespace std;

int main(){

    int a,b,c;
    cin >> a >> b >> c;
    cout <<  (  a || (!a) || b && (c || b && !a)  ) << "\n";
}