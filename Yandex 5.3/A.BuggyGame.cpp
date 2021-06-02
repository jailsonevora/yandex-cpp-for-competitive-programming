#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    long long n,tax;
    cin >> n;

    vector<long long> v;

    for (long long i = 1; i < n; i++)
    {
        if(i == 1) v.push_back(i);
        else if(i == 2) v.push_back(n);
        else{n=n*n; v.push_back(n);}
    }
    
    cout << "";

}