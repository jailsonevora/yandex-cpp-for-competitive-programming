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

    // without loop
    cin >> a >> b >> c >> d;
    swap = (a > b) == true;
    swap += (a > c) == true;
    swap += (a > d) == true;
    swap += (b > c) == true;
    swap += (b > d) == true;
    swap += (c > d) == true;

    // with loop without swapping
    // for (int i = 0; i < input.size(); i++)
    // {
    //     for (int j = i + 1; input[i] >=  input[j]; j++)
    //         swap++;      
    // }

    // with loop with swapping
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