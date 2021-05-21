#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void read(std::vector<int> &v)
{
    int a;
    cin.clear();
    while (cin >> a){
        v.push_back(a);
        cin.clear();
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    std::vector<int> a;

    read(a);

}   
