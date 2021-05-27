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
    
    int countWords=0;
    int countNoEmptyLine = 0;

    ifstream MyReadFile("C:/Competitive Programming/yandex-cpp-for-competitive-programming/Yandex 4.7/inputD.txt");

    while(getline(MyReadFile, line)){
        stringstream ss(line); 

        if(!line.empty() || )
            countNoEmptyLine++;
        
        while (!ss.eof()){
            string words;
            ss >> words;
            if(!words.empty()) 
                countWords++;            
        }                    
    }

    cout << countNoEmptyLine<< " " << countWords;

    MyReadFile.close();
}