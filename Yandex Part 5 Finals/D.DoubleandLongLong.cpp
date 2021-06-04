#include <iostream>
#include <cmath>

using namespace std;

void f(double d){
	unsigned long long i;
    for (i = 1 << 64; i > 0; i = i / 2)
        ((long long) d & i) ? printf("1") : printf("0");
}

int main(){
    
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    double d;
    cin >> d;

    f(d);
}