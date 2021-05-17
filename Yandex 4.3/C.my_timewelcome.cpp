#include <iostream>
#include <cmath>

using namespace std;



struct my_time
{


    int day = 0, hour = 0, minute = 0, second = 0;
    void set(int t){
          
        int dayR = t % 86400;
        int hourR = dayR % 3600;
        int minuteR = hourR % 60;

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
