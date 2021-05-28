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
        if (val + other.val < (mod-1) && val + other.val > 0)
    		return val + other.val;
    }

    Int operator * (Int& other) {
        if (val * other.val < (mod-1) && val * other.val > 0)
        	return val * other.val;
    }

    long long operator - (Int& other){
    	if (val - other.val < (mod-1) && val - other.val > 0)
        	return val - other.val;
    }
};   