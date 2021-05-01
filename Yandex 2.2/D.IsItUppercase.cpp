#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    char a;
    cin >> a;

    if(int(a) >= 65 && int(a) <= 90) cout << "BIG";
    else if(int(a) >= 97 && int(a) <= 122) cout << "small";
}