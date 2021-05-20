#include <iostream>
#include <cmath>
#include <tuple>

using namespace std;

struct my_time
{
    long long day = 0, hour = 0, minute = 0, second = 0;
    void set(long long t){
          
        long long dayR = abs(t) % 86400;
        long long hourR = dayR % 3600;
        long long minuteR = hourR % 60;

        day = t / 86400;
        hour = dayR / 3600;
        minute = hourR / 60;
        second = minuteR;                 
    }

    bool operator < (const my_time& other) const{
        return std::tie(day, hour, minute, second) < std::tie(other.day, other.hour, other.minute, other.second);
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 10;

    my_time t; 
    t.set(86401);

    my_time a[n];
    for (int i = 0; i < n; ++i) {  
        for (int j = i; j < n; ++j) {  
            if (a[j] < a[i]) {  
                std::swap(a[i], a[j]);  
            }  
        }  
    }
}   
