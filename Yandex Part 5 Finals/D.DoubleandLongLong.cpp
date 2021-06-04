#include <iostream>
#include <cmath>

using namespace std;

void f(double d){
	unsigned long long i;
    for (i = 1 << 64; i > 0; i = i / 2)
        ( ( (long long) d) & i) ? printf("1") : printf("0");
}

void fs(double d){
    long long dL = (long long) d;
    if (dL > 1)
        fs(dL >> 1);
 
    printf("%lld", dL & 1);
}

int main(){
    
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    double d;
    cin >> d;

    f(d);
}