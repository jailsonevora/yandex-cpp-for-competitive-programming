#include <iostream>
#include <vector>
#include <iterator>
#include <sstream>
#include <fstream>
#include <bits/stdc++.h>
#include <map>

using namespace std;

void printingMatrix(vector <vector <int> > &vec)
{
    for (std::vector<int> row: vec){
        for (int val: row)
            cout << val << " ";
        cout<<endl;
    }
}

// with MultiMap
void merge(vector <vector <int> > &vec){
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<vector<int>> matrix;
    int n = 0, count = 0;
    int arrParam[3];
    std::string line; int num;

    ifstream MyReadFile("C:/Competitive Programming/yandex-cpp-for-competitive-programming/Yandex 4.6/inputD.txt");

    while(getline(MyReadFile, line)){

        if(count == 0){
            stringstream ss(line);
                ss >> n;
            count++;
        }
        else{
            std::vector<int> v;  
            stringstream ss(line);
            for (int i = 0; !ss.eof(); i++){
                if(i==0){
                    ss >> num;
                }
                else{
                    ss >> num;
                    v.push_back(num);
                }
            } 
            matrix.push_back(v);
        }
    }
    merge(matrix);

    printingMatrix(matrix);
    
    MyReadFile.close();
}   
