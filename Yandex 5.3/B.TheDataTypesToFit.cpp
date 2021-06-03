#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    
    long long line;
    cin >> line;
    
    int total_digts = (int)log10(abs(line));
    total_digts++;

    auto a = sizeof(short int);

    if(total_digts <= sizeof(char)*8)
        cout << "char" << "\n";
    if(total_digts <= sizeof(unsigned char)*8 && line > 0)
        cout << "unsigned char" << "\n";
    if(total_digts <= sizeof(short int)*8)
        cout << "short int" << "\n";
    if(total_digts <= sizeof(unsigned short int)*8 && line > 0)
        cout << "unsigned short int" << "\n";
    if(total_digts <= sizeof(int)*8)
        cout << "int" << "\n";
    if(total_digts <= sizeof(unsigned int)*8 && line > 0)
        cout << "unsigned int" << "\n";
    if(total_digts <= sizeof(long long)*8)
        cout << "long long" << "\n";
    if(total_digts <= sizeof(unsigned long long)*8 && line > 0)
        cout << "unsigned long long" << "\n";
}