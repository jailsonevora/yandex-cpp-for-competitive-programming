#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>
#include <sstream>
#include <fstream>

using namespace std;

void sort_vector(vector <vector <int> > &vec){
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<vector<int>> v;
    int n = 0, x = 0, t = 0, size = 0, count = 0;
    long long val = 0, i = 0;
    int arrParam[3];
    std::string line; int num;


    ifstream MyReadFile("C:/Competitive Programming/yandex-cpp-for-competitive-programming/Yandex 4.6/inputD.txt");

        
    while(getline(MyReadFile, line)){
        if(count == 0){
            stringstream ss(line);
                ss >> n;
            count++;
        }
        else{
            stringstream ss(line);
            for (int i = 0; !ss.eof(); i++){
                ss >> num;
                arrParam[i] = num;
            }
        }
    }   
    
    MyReadFile.close();
}   
