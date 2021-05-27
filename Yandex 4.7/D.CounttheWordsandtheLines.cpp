#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    string line;
    string words;
    int countWords=0;
    int countNoEmptyLine = 0, countNumLine;

    ifstream MyReadFile("C:/Competitive Programming/yandex-cpp-for-competitive-programming/Yandex 4.7/inputD.txt");

    while(getline(MyReadFile, line)){
        stringstream ss(line);
        while (!ss.eof()){
            ss >> words;
            //int space = std::count(words.begin(), words.end(), '  ');
            if(!words.empty()) 
                countWords++;            
        }            
    }

    cout << countWords;

    MyReadFile.close();
}