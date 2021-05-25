#include <iostream>
#include <vector>
#include <iterator>
#include <sstream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

void sort_vector(vector <vector <int> > &vec){
    stable_sort(vec.begin(), vec.begin() + vec.size());
}

// void sort_vector(vector <vector <int> > &vec){
    
// }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<vector<int>> matrix;
    int n = 0, count = 0;
    int arrParam[3];
    std::string line; int num;

    ifstream MyReadFile("C:/Competitive Programming/yandex-cpp-for-competitive-programming/Yandex 4.6/inputD.txt");

    // construct a vector of ints with the given default value
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
                    ss >> num;
                    v.push_back(num);
                } 
            matrix.push_back(v);
        }
    }
    sort_vector(matrix);
    
    MyReadFile.close();
}   
