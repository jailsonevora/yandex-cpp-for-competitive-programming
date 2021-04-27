#include <iostream>

using namespace std;

int main(){

    long long sum = 0;
    int a, count = 0;

    do{    
        cin >> a;
        sum+=a;
        count++;
    }while(count <= 3);

    cout << sum << "\n";
}
