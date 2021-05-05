#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long a, b;

    cin >> a >> b;

    long long aliceCourseYearOne = a * 3;
    long long bobCourseYearOne = b * 2;

    int year = 1;

    for (; aliceCourseYearOne <= bobCourseYearOne; year++){
        aliceCourseYearOne*=3;
        bobCourseYearOne*=2;
    }

    cout << fixed << setprecision(0) << year;   
}