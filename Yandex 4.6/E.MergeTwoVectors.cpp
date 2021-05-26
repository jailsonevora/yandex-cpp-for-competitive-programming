#include <iostream>
#include <vector>
#include <iterator>
#include <sstream>
#include <fstream>
#include <bits/stdc++.h>
#include <map>

using namespace std;


vector <int> merge(vector <int> &vec1, vector <int> &vec2){
    if(vec1 == vec2)
        return;
    return mergeHalves(vec1, vec2);
}
vector <int> mergeHalves(vector <int> &vec1, vector <int> &vec2){

    vector <int> temp;
    while (vec1.begin() != vec1.end() && vec2.begin() != vec2.end())
    {
        if(vec1.begin() <= vec2.begin()){
            temp.begin() = vec1.begin();
            vec1.begin()++;
        }
        else{
            temp.begin() = vec2.begin();
            vec2.begin()++;
        }
        temp.begin()++;
    }
    // Copy the remaining elements of
    // *ptrBgA, if there are any
    while (vec1.begin() != vec1.end()) {
        temp.begin() = vec1.begin();
        vec1.begin()++;
        temp.begin()++;
    }
 
    // Copy the remaining elements of
    // *ptrBgB, if there are any
    while (vec2.begin() != vec2.end()) {
        temp.begin() = vec2.begin();
        vec2.begin()++;
        temp.begin()++;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<vector<int>> matrix;
    int n = 0, count = 0;
    int arrParam[3];
    std::string line; int num;

    vector<int> v1 = {1,3,5,7,10}, v2{2,4,8,11};

    merge(v1,v2);
}   
