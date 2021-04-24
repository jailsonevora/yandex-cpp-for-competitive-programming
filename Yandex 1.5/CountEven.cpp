#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    int even = even + (a % 2 == 0);
    even += (b % 2 == 0);
    even += (c % 2 == 0);
    even += (d % 2 == 0);
    even += (e % 2 == 0);
    std::cout << even << endl;
}