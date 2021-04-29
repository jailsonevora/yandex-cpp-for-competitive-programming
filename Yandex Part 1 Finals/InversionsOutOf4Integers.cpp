#include <iostream>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <iomanip>
#include <map>
#include <array>

using namespace std;

int main(){

    int a, count = 0, swap = 0;
    array<int, 4> input;

    do{    
        cin >> a;
        input[count] = a;
        count++;       
    }while(count <= 3);
    
    for (int i = 0; i < input.size(); i++)
    {
        for (int j = i + 1; input[i] >=  input[j]; j++)
            swap++;      
    }

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