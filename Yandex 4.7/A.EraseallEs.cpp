#include <iostream>
#include <string>

using namespace std;

void e_rase(string &e){
    for(int i = 0, j = 1; i < e.length(); ++i, ++j){
        if(e.substr(i,j) == "e")
            e.erase('e');
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    string e = "afegsaegddfhafe";
    e_rase(e);
}