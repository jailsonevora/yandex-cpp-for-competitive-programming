#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string line;

    ifstream MyReadFile("C:/Competitive Programming/yandex-cpp-for-competitive-programming/Yandex Part 4 Finals/inputF.txt");

    while(getline(MyReadFile, line)){
        stringstream ss(line);
        int i = 0, sum = 0; 
        int n;

        while (!ss.eof()){
            if(i > 0){
                int temp;
                ss >> temp;
                sum+=temp;
            }
            else
                ss >> n;
            ++i;         
        }
        cout << sum;
    }

    MyReadFile.close();
    
}