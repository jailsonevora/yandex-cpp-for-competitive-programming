#include <iostream>
#include <cmath>
#include <tuple>

using namespace std;

struct my_time
{
    long long day = 0, hour = 0, minute = 0, second = 0;
    long long floor = 0, flat = 0;

    my_time(long long floorC, long long flatC, my_time builtTimeSec){
        day = builtTimeSec.day;
        hour = builtTimeSec.hour;
        minute = builtTimeSec.minute;
        second = builtTimeSec.second;
        floor = floorC;
        flat = flatC;
    }

    bool operator != (const my_time& other) const{
        return std::tie(day, hour, minute, second) != std::tie(other.day, other.hour, other.minute, other.second);
    }

    bool operator - (my_time& other){
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
        long long d = day - other.day;
        long long h = hour - other.hour;
        long long m = minute - other.minute;
        long long s = second - other.second;
        return false;
    }
};

    

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // my_time t(4, 3, );

    // my_time other ;

    // my_time result = t - other;

    // cout << result.day << " " << result.hour << " " << result.minute << " " << result.second << "\n";

}   
