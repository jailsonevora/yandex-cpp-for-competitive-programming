#include <iostream>
#include <cmath>

using namespace std;

void merge(int *ptrBgA, int *ptrEnA, int *ptrBgB, int *ptrEnB, int *ptrBgc){

    for (; *ptrBgA != *ptrEnA ; ++ptrBgA, ++ptrBgc)
        *ptrBgc = *ptrBgA;

    for (; *ptrBgB != *ptrEnB ; ++ptrBgB, ++ptrBgc)
        *ptrBgc = *ptrBgB;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 5;
    int a[n] = {2,4,6,8,9};
    int b[n] = {32,7,5,23,14};
    int c[n*2];

    int *ptrBgA = &a[0]; 
    int *ptrEnA = &a[n];

    int *ptrBgB = &b[0]; 
    int *ptrEnB = &b[n];

    int *ptrBgc = c; 

    merge(ptrBgA, ptrEnA, ptrBgB, ptrEnB, ptrBgc);    

    for (int i = 0; i < n*2; i++)
        cout << "c["<<i<<"]: "<< c[i] << "\n";
}   
