#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int b, capital; 
    string text;

    cin >> b;
    cin.ignore();
    getline(cin, text);

    for (int i = 0; i < text.size(); i++)
        (int(text[i]) >= 65 && int(text[i]) <= 90) ? capital++ : 0;   
    cout << (capital*b);   
}