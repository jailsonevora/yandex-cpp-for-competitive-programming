#include <iostream>
#include <cmath>

using namespace std;

int sum(int a, int b){
	return a+b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0, m = 0;
    cin >> n >> m;
    
    cout << sum(n, m);
}   
