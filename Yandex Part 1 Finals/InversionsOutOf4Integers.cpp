#include <iostream>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <iomanip>
#include <map>
#include <array>

using namespace std;

int main(){

    int a, b, c, d, count = 0, swap = 0;
    array<int, 4> input;

    cin >> a >> b >> c >> d;

    bool x = (a >= b) == true;
    x += (a >= c) == true;
    x += (a >= d) == true;

    // for (int i = 0; i < input.size(); i++)
    // {
    //     for (int j = i + 1; input[i] >=  input[j]; j++)
    //         swap++;      
    // }

    // for (int i = 0; i < input.size(); i++)
    // {
    //     for (int j = i+1; j < input.size(); j++)
    //     {
    //         if(input[i] >=  input[j]){
    //             int iTemp = input[i];
    //             int jTemp = input[j];
    //             input[j] = iTemp;
    //             input[i] = jTemp;
    //             swap++;
    //         }
    //     }        
    // }

    cout << swap;
}