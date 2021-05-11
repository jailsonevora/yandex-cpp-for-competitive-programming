#include <iostream>
#include <cmath>

using namespace std;

unsigned long long factorial(int n){
	
	if(n == 0 || n == 1)
    	return 1;
	return n * factorial(n-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0;
    cin >> n;

    cout << factorial(n);    
}   
