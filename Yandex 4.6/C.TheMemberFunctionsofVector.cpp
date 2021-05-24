#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>
#include <sstream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    std::string line;
    vector<int> v = {1,4,5,7,23,52,9};
    int n = 0, t = 0, size = 0, count = 0;
    long long val = 0, i = 0;

    cin >> n;
    cin.ignore();
    do{        
        getline(cin, line);
        t = int(line[0]);
        switch (t)
        {
            case 1:{
                size = line[1]; 
                v.resize(size);
            }break;            

            case 2:{
                n = line[1];
                val = line[2];
                v.assign(n,val);
            }
            break;

            case 3:
                v.clear();
            break;

            case 4:{
                i = line[1];
                (i < 0 && i > v.size()) ? cout << "Out of bounds" << "\n" : cout << v[i] << "\n";
            }
            break;

            case 5:{
                cout << v.size() << "\n";
            }
            break;

            case 6:{
                val = line[1];
                v.push_back(val);
            }
            break;

            case 7:{
                if(!v.empty()) v.pop_back();
            }
            break;

            case 8:{
                i = line[1];
                if(i >= 0 && i < v.size()) v.erase(v.begin()+i);
            }
            break;

            case 9:{
                i = line[1];
                val = line[2];
                if(i >= 0 && i < v.size()) v.insert(v.begin()+i, val);
            }
            break;

            case 10:
                (v.empty()) ? cout << "empty" << "\n" : cout << v.back() << "\n";
            break;
        }
        count++;
    }while (count <= n);
    
}   
