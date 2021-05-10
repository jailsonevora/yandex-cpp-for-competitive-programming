#include <iostream>
#include <cmath>

using namespace std;

void product(int a, int b){
	cout << (long long)a*b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0, m = 0;
    cin >> n >> m;    
    product(n, m);
}   
