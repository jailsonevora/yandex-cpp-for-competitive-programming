#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    string line;

    long long lL;
    char c;
    unsigned char uC;
    short int sI;
    unsigned short int usI;
    int i;
    unsigned int uI;
    unsigned long long ulL;


    getline(cin, line);
    stringstream ss(line);
    ss >> lL;
    if(lL<0)
        cout << "long long" << "\n";
    ss >> c;
    if(c<0)
        cout << "char" << "\n";
    if(ss >> uC)
        cout << "unsigned char" << "\n";
    if(ss >> sI)
        cout << "short int" << "\n";
    if(ss >> usI)
        cout << "unsigned short int" << "\n";
    ss >> i;
    if(i<0)
        cout << "int" << "\n";
    if(ss >> uI)
        cout << "unsigned int" << "\n";
    if(ss >> ulL)
        cout << "unsigned long long" << "\n";
}