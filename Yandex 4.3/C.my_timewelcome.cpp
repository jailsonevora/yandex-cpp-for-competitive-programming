#include <iostream>
#include <cmath>

using namespace std;



struct my_time
{
    long long day = 0, hour = 0, minute = 0, second = 0;
    void set(long long t){
          
        long long dayR = t % 86400;
        long long hourR = dayR % 3600;
        long long minuteR = hourR % 60;

        day = t / 86400;
        hour = dayR / 3600;
        minute = hourR / 60;
        second = minuteR;                 
    }
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    my_time t; 
    t.set(86401);
}   
