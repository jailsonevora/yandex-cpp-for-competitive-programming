#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>

using namespace std;

string conCatenate(const string s1, const string s2, const string s3){

    if(s1 < s2 && s2 < s3)
        return s1+s2+s3;
    else if(s2 < s3 && s3 < s1)
        return s2+s3+s1;
    else if(s3 < s1 && s1 < s2)
        return s3+s1+s2;
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    string line;
    int i=0;
    string arr[3];

    ifstream MyReadFile("C:/Competitive Programming/yandex-cpp-for-competitive-programming/Yandex Part 4 Finals/inputD.txt");

    while(getline(MyReadFile, line)){
        stringstream ss(line); 

        string words;
        ss >> words;
        arr[i] = words;

        i++;                   
    }
    MyReadFile.close();

    cout << conCatenate(arr[0], arr[1], arr[2]) << "\n";
    
}