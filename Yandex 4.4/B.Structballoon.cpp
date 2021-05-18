#include <iostream>
#include <cmath>

using namespace std;

struct balloon
{
    long long a = 0, b = 0;
    balloon(int a2, int b2){
        a = a2;
        b = b2;
    }    
    ~balloon(){
        cout << a+b;
    }     
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    balloon(1,1);
}   
