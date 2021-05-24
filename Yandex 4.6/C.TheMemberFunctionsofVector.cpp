#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>
#include <sstream>
#include <fstream>

using namespace std;

void readLine(int *arr){   
        
    std::string line; int num;
    ifstream MyReadFile("inputC.txt");

    while(getline(MyReadFile, line)){
        stringstream ss(line);

        for (int i = 0; !ss.eof(); i++){
            ss >> num;
            arr[i] = num;
        }
    }
    MyReadFile.close();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> v = {1,4,5,7,23,52,9};
    int n = 0, x = 0, t = 0, size = 0, count = 0;
    long long val = 0, i = 0;
    int arrParam[3];
    int *ptr = arrParam;
    std::string line; int num;


    ifstream MyReadFile("C:/Competitive Programming/yandex-cpp-for-competitive-programming/Yandex 4.6/inputC.txt");

    //cin >> x;

    while(getline(MyReadFile, line)){
        stringstream ss(line);

        for (int i = 0; !ss.eof(); i++){
            ss >> num;
            arrParam[i] = num;
        }

        t = arrParam[0];
        switch (t)
        {
            case 1:{
                size = arrParam[1]; 
                v.resize(size);
            }break;            

            case 2:{
                n = arrParam[1];
                val = arrParam[2];
                v.assign(n,val);
            }break;

            case 3:
                v.clear();
            break;

            case 4:{
                i = arrParam[1];
                if(i < 0 || i > v.size()) cout << "Out of bounds" << "\n"; else cout << v.at(i) << "\n";
            }break;

            case 5:{
                cout << v.size() << "\n";
            }break;

            case 6:{
                val = arrParam[1];
                v.push_back(val);
            }break;

            case 7:{
                if(!v.empty()) v.pop_back();
            }break;

            case 8:{
                i = arrParam[1];
                if(i >= 0 || i < v.size()) v.erase(v.begin()+i);
            }break;

            case 9:{
                i = arrParam[1];
                val = arrParam[2];
                if(i >= 0 && i < v.size()) v.insert(v.begin()+i, val);
            }break;

            case 10:
                (v.empty()) ? cout << "empty" << "\n" : cout << v.back() << "\n";
            break;
        }
        count++;
    }
    MyReadFile.close();
}   
