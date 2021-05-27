#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>

using namespace std;

bool iequals(const string& a, const string& b)
{
    return std::equal(a.begin(), a.end(),
                      b.begin(), b.end(),
                      [](char a, char b) {
                          return tolower(a) == tolower(b);
                      });
}

void translator(string &e){

    if(iequals(e,"cat"))
        cout << "meow" << "\n";
    else if(iequals(e,"dog"))
        cout << "woof" << "\n";
    else if(iequals(e,"pig"))
        cout << "grunt" << "\n";
    else if(iequals(e,"rooster"))
        cout << "cock-a-doodle-doo" << "\n";
    else if(iequals(e,"cow"))
        cout << "moo" << "\n";
    else 
        cout << "all-animals-are-equal" << "\n";             
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    string line;

    ifstream MyReadFile("C:/Competitive Programming/yandex-cpp-for-competitive-programming/Yandex 4.7/inputC2.txt");

    while(getline(MyReadFile, line)){
        translator(line);
    }

    MyReadFile.close();
}