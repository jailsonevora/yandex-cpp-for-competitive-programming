#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void e_rase(string &e){
    e.erase(std::remove(e.begin(), e.end(), 'e'), e.end());    
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    string e = "afegsaegddfhafe";
    e_rase(e);
    cout << e;
}