#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>
#include <sstream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

void sort_vector(vector <vector <int> > &vec){
    stable_sort(vec.begin(), vec.begin() + vec.size());
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
            stringstream ss(line);
            for (int i = 0; !ss.eof(); i++){
                ss >> num;
                std::vector<std::vector<int>> matrix(n, std::vector<int>(n, num));
            }
        }
    } 

    sort_vector(matrix); 

    for (std::vector<int> row: matrix)
    {
        for (int val: row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
    
    MyReadFile.close();
}   
