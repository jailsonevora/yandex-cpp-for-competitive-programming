#include <iostream>
#include <vector>
#include <iterator>
#include <sstream>
#include <fstream>
#include <bits/stdc++.h>
#include <map>

using namespace std;

vector <int> mergeHalves(vector <int> &vec1, vector <int> &vec2){

    std::vector <int> temp;
    std::vector<int>::iterator it1 = vec1.begin();
    std::vector<int>::iterator it2 = vec2.begin();
    std::vector<int>::iterator itTemp = temp.begin();

    while (it1 != vec1.end() && it2 != vec2.end())
    {
        if(*it1 <= *it2){
            temp.push_back(*it1);
            it1++;
        }
        else{
            temp.push_back(*it2);
            it2++;
        }
        itTemp++;
    }
    // Copy the remaining elements of, if there are any
    while (it1 != vec1.end()) {
        temp.push_back(*it1);
        it1++;
        itTemp++;
    }
 
    // Copy the remaining elements of, if there are any
    while (it2 != vec2.end()) {
        temp.push_back(*it2);
        it2++;
        itTemp++;
    }
    return temp;
}

vector <int> merge(vector <int> &vec1, vector <int> &vec2){
    if(vec1.begin() == vec2.begin())
        return vec1;
    return mergeHalves(vec1, vec2);
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
