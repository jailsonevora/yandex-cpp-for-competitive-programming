#include <iostream>
#include <cmath>

using namespace std;

//by reference with pointer
bool check(int *a){
    return (a == NULL) ? true : false; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 4;

    int *a = &n;
    cout << "a before: " << *a << "\n";    

    //call by reference with pointer
    cout << "a after: " << check(a) << "\n";
}   
