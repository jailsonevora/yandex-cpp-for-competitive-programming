#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>
#include <sstream>

using namespace std;

void read()
{
    std::string line;
    std::vector<std::vector<int>> tmp;
    while (std::getline(std::cin, line)) {
        std::istringstream bufferInput(line);
        tmp.emplace_back(std::istream_iterator<int>{bufferInput}, std::istream_iterator<int>{});
    }
}

void read(std::vector<int> &v, int n)
{
    int a;
    while (cin >> a){
        cin.clear();
        v.push_back(a);        
    }
};

void read(std::vector<int> &v){
    std::string line;
    cin.ignore();
    getline(cin, line);

    for (int i = 0; i < line.size(); i++)
        v.push_back(int(line[i]));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    std::vector<int> a;
    read(a);
}   
