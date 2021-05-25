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

void sort_vector(vector <vector <int> > &vec){
    int i = 0;
    multimap<int, int> mp;
    for (std::vector<int> row: vec){
        int sum = 0;
        for (int val: row)
            sum += val;
        mp.insert(pair<int, int>(sum,i)); 
        ++i;
    }

    vector <vector <int> > temp;
    multimap <int, int> :: iterator itr;

    for (itr = mp.begin(); itr != mp.end(); itr++){
        std::vector<int> v;
        for (int j = 0; j < vec.size() && vec[itr->second][j] > 0; j++)
            v.push_back(vec[itr->second][j]);
        temp.push_back(v);
    }
    vec.clear();
    std::copy(temp.begin(), temp.end(), back_inserter(vec));
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
    sort_vector(matrix);

    printingMatrix(matrix);
    
    MyReadFile.close();
}   
