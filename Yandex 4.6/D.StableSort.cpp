#include <iostream>
#include <vector>
#include <iterator>
#include <sstream>
#include <fstream>
#include <bits/stdc++.h>
#include <map>

using namespace std;

// void sort_vector(vector <vector <int> > &vec){
//     stable_sort(vec.begin(), vec.begin() + vec.size());
// }

void sort_vector(vector <vector <int> > &vec){
    int i = 0;
    multimap<int, int> mp;
    for (std::vector<int> row: vec){
        int sum = 0;
        for (int val: row){
            sum += val;
        }
        mp.insert(pair<int, int>(sum,i)); 
        ++i;
    }

    vector <vector <int> > temp;
    multimap <int, int> :: iterator itr;
    //vector< vector<int> >::iterator row;
    //vector<int>::iterator col;
    for (itr = mp.begin(); itr != mp.end(); ++itr)
        for(int i = itr->second; i < vec.size(); i++)
            for (int j = 0; j < vec.size(); j++)
                cout << vec[i][j]<<", ";
}

void printingMatrix(vector <vector <int> > &vec)
{
    for (std::vector<int> row: vec){
        for (int val: row)
            cout << val << " ";
        cout<<endl;
    }
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
