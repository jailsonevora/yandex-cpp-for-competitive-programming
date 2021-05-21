#include <iostream>
#include <cmath>
#include <tuple>

using namespace std;

struct my_time
{
    long long day = 0, hour = 0, minute = 0, second = 0;

    void set(my_time& builtTimeSec){
        day = builtTimeSec.day;
        hour = builtTimeSec.hour;
        minute = builtTimeSec.minute;
        second = builtTimeSec.second;
    }      
};

struct house
{  
    long long floor = 0, flat = 0;
    my_time built;

    house(long long floorC, long long flatC, my_time& builtTimeSec){
        floor = floorC;
        flat = flatC;
        built = builtTimeSec;
    }   

    bool operator == (house& other) {
        return std::tie(floor, flat) == std::tie(other.floor, other.flat);
    }

    bool operator != (house& other) {
        return std::tie(floor, flat) != std::tie(other.floor, other.flat);
    }

    bool operator - (my_time& other){
        if(other.second > built.second){
            built.second += 60;
            --built.minute;
        }
        if(other.minute > built.minute){
            built.minute += 60;
            --built.hour;
        }
        if(other.hour > built.hour){
            built.hour += 60;
            --built.day;
        }
        my_time t {built.day - other.day, built.hour - other.hour, built.minute - other.minute, built.second - other.second};
        return (t.minute < 10 ? true : false);
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
