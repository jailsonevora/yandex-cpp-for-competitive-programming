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
    my_time operator - (my_time& other){
        my_time t {day - other.day, hour - other.hour, minute - other.minute, second - other.second};
        if(other.second > second){
            second += 60;
            --minute;
        }
        if(other.minute > minute){
            minute += 60;
            --hour;
        }
        if(other.hour > hour){
            hour += 60;
            --day;
        }
        return t;
    }
};

    

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    my_time t; 
    t.set(86401);

    my_time other {5,7,12,15};

    my_time result = t - other;

    cout << result.day << " " << result.hour << " " << result.minute << " " << result.second << "\n";

}   
