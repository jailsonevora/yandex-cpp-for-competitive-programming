#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    int positive = positive + (a > 0);
    positive += (b > 0);
    positive += (c > 0);
    positive += (d > 0);
    positive += (e > 0);
    std::cout << positive << endl;

    //static array
    int w[5];
    w[0] = 0;
    w[1] = 1;
    w[2] = 2;
}