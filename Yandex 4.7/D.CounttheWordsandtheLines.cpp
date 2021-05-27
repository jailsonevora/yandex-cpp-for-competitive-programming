#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>

using namespace std;


int countLines(){

    string line;
    int countNoEmptyLine = 0;

    ifstream MyReadFile("C:/Competitive Programming/yandex-cpp-for-competitive-programming/Yandex 4.7/inputD.txt");

    while(!getline(MyReadFile, line).eof()){
        stringstream ss(line); 

        if(!line.empty())
            countNoEmptyLine++;                   
    }

    MyReadFile.close();

    return countNoEmptyLine;
}

int countWords(){

    string line;
    int countWords=0;

    ifstream MyReadFile("C:/Competitive Programming/yandex-cpp-for-competitive-programming/Yandex 4.7/inputD.txt");

    while(getline(MyReadFile, line)){
        stringstream ss(line); 

        while (!ss.eof()){
            string words;
            ss >> words;
            if(!words.empty()) 
                countWords++;            
        }                    
    }
    MyReadFile.close();

    return countWords;
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    cout << countLines() << " " << countWords();
    
}