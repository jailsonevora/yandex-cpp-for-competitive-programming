#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> ar;

    int a, n, i = 0;    
    while (cin >> a)
        ar.push_back(a);

    for (int i = 1; i < ar.size(); i++)
        cout << ar[i] << " ";
     
}
