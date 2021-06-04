#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    
    unsigned int max = 0;
    while (n) {
        if( (n+max) == (n^max) )
            max = n; 
        n >>= 1;
    }
    cout << max;
}

void f(double d){
	unsigned long long i;
    for (i = 1 << 64; i > 0; i = i / 2)
        ((long long) d & i) ? printf("1") : printf("0");
}