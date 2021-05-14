#include <iostream>
#include <cmath>

using namespace std;

int dist(int &a, int &b){

    return ((b - a) + 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x[] = {2,3,6,37,5,8,6,4,6};   

    dist(x[3], x[8]);
    cout << "Distance : "<< dist(x[3], x[8]) <<"\n";
}   
