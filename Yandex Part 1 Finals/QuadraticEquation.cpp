#include <iostream>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    int a, b, c;
    double xPositive, xNegative;

    cin >> a  >> b >> c;

    double q = sqrt(pow(b,2)-(4 * a * c));

    xPositive = ((-b) + q) / (2 * a);
    xNegative = ((-b) - q) / (2 * a);

    cout << "Positive : " << std::fixed << xPositive << "\n";
    cout << "Negative : " << std::fixed << xNegative << "\n";

}