#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    float nFloat;
    cin >> n;
    nFloat = (float)n/10000;
    int d = (int)nFloat;
    std::cout << (d-n) << endl;
}