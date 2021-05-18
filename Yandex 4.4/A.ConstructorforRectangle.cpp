#include <iostream>
#include <cmath>

using namespace std;

struct rectangle
{
    long long w = 0, h = 0;
    rectangle(int x1, int y1, int x2, int y2){
        w = (long long) x2 - (long long) x1;
        h = (long long) y2 - (long long) y1;
    } 

    void print(){
        cout<< "Width: " << w << " Height: " << h << "\n";
    }       
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    rectangle(1,1,4,6).print();
}   
