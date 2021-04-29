#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){

    int a, count = 0;
    set<int> no_lucky;
    pair<set<int>::iterator,bool> res;

    do{    
        cin >> a;
        res = no_lucky.insert(a);
        if (res.second == false)
            no_lucky.erase(a);        
        count++;
    }while(count <= 6);
    cout << *no_lucky.begin() << "\n";
}
