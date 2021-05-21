#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>
#include <sstream>

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

std::vector<int> read(){
    std::string line;
    std::vector<int> v;
    cin.ignore();
    getline(cin, line);

    for (int i = 0; i < line.size(); i++)
        v.push_back(int(line[i]));

    return v;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
}   
