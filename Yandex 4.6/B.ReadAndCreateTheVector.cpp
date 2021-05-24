#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>
#include <sstream>
#include <string>

using namespace std;


std::vector<int> read(int n)
{
    std::vector<int> v;
    int a;
    while (cin >> a){
        cin.clear();
        v.push_back(a);        
    }
    return v;
};

std::vector<int> read(const string &line, vector<int> &v){ 
    
    int num = 0;
    stringstream ss(line);

    while (!ss.eof()) {
        ss >> num;
        cout << num;
        v.push_back(num);
    }
    return v;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    std::string line;
    std::vector<int> v;
    getline(cin, line);
    
    read(line, v);
}   
