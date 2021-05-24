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
    int n = 0, t = 0, size = 0, val = 0, ith = 0;

    cin >> n;
    cin.ignore();
    getline(cin, line);

    t = line[0];

        switch (t)
        {
            case 1:{
                size = line[1]; 
                v.resize(size);
            }break;
            

            case 2:
                n = line[1];
                val = line[2];
                v.assign(n,val);
            break;

            case 3:
                v.clear();
            break;

            case 4:
                ith = line[1];
                (ith < 0 && ith > v.size()) ? cout << "Out of bounds" << "\n" : cout << v[ith] << "\n";
            break;

            case 5:
                cout << v.size() << "\n";
            break;

            case 6:
                val = line[1];
                v.push_back(val);
            break;

            case 7:
                ()
            break;

            case 8:
            /* code */
            break;

            case 9:
            /* code */
            break;

            case 10:
            /* code */
            break;
        
        default:
            break;
        }
    }


    

}   
