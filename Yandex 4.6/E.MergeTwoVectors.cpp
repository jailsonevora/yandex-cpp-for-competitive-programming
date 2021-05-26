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

void merge(vector <int> &vec1, vector <int> &vec2){
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<vector<int>> matrix;
    int n = 0, count = 0;
    int arrParam[3];
    std::string line; int num;

    //merge(v1,v2);
    printingMatrix(matrix);
}   
