#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a[30];  
    long long b[239];  
    char ch;  
    unsigned long long q;  
    char txt[15];

    cout << "Total: " << sizeof(a) + sizeof(b) + sizeof(ch) + sizeof(q) + sizeof(txt) << "\n";
    cout << "a: " << sizeof(a) << " ";
    cout << "b: " << sizeof(b) << " ";
    cout << "ch: " << sizeof(ch)<< " ";
    cout << "q: " << sizeof(q) << " ";
    cout << "txt: " << sizeof(txt) << " ";   

    //2056 
}   
