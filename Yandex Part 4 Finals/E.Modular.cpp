#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>

using namespace std;

int mod;

class Int
{  
    public : long long val;

    public :
    Int(long long v){
        val = v;
    }   

    long long operator + (Int& other) {
        return mod + other.val;
    }

    Int operator * (Int& other) {
        return mod * other.val;
    }

    long long operator - (Int& other){
        return mod - other.val;
    }
};   