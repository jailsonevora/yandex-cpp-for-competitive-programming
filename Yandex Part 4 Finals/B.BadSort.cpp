#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>
#include <sstream>

using namespace std;

int cnt = 0;  
void swap(int &a, int &b) {  
    ++cnt;  
    if (cnt % 4 == 0) {  
        int c = a;  
        a = b;  
        b = c;  
    }  
}

void BadSort(vector <int> &a) {  
    int n = a.size();  
    for (int i = 0; i < n; ++i) {  
        for (int j = 0; j + 1 < n; ++j) {  
            if (a[j] > a[j + 1]) {  
                swap(a[j], a[j + 1]);  
            }  
        }  
    }  
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> a {5,4,3, 2, 1, 6, 7,8,9,10 };

    BadSort(a);

    for (int d : a)
    {
        cout << d << " "; 
    }
    
}   
