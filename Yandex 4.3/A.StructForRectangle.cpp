#include <iostream>
#include <cmath>

using namespace std;

struct Rectangle
{
    int a = 0, b = 0;
    void set(int aR, int bR){
        a = aR;
        b = bR;
    }
    int get(){
        int c = (a*a) + (b*b);
        return std::sqrt(c);
    }
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Rectangle r;

    r.set(3,4);

    cout << r.get();
}   
