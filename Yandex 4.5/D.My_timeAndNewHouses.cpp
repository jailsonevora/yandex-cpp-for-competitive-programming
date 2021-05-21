#include <iostream>
#include <cmath>
#include <tuple>

using namespace std;



struct house
{
    struct my_time
    {
        long long day = 0, hour = 0, minute = 0, second = 0;

        void set(my_time& builtTimeSec){
            day = builtTimeSec.day;
            hour = builtTimeSec.hour;
            minute = builtTimeSec.minute;
            second = builtTimeSec.second;
        }

        my_time operator - (my_time& other){
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
            return {day - other.day, hour - other.hour, minute - other.minute, second - other.second};
        }

        public : bool difference(house& builtTimeSec, my_time& other){
            return (builtTimeSec.built - other)==1 ? true : false;
        }
    };
    long long floor = 0, flat = 0;
    my_time built;

    house(long long floorC, long long flatC, my_time& builtTimeSec){
        floor = floorC;
        flat = flatC;
        built = builtTimeSec;
    }   

    bool operator != (const house& other) const{
        return std::tie(floor, flat) != std::tie(other.floor, other.flat) && difference(built, other);
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
