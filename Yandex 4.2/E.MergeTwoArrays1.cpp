#include <iostream>
#include <cmath>

using namespace std;

void mergeHalves(int *ptrBgA, int *ptrEnA, int *ptrBgB, int *ptrEnB, int *ptrBgc);
void merge(int *ptrBgA, int *ptrEnA, int *ptrBgB, int *ptrEnB, int *ptrBgc);

void merge(int *ptrBgA, int *ptrEnA, int *ptrBgB, int *ptrEnB, int *ptrBgc){

    if(*ptrBgA == *ptrEnB)
        return;
    mergeHalves(ptrBgA, ptrEnA,ptrBgB,ptrEnB,ptrBgc);
}
void mergeHalves(int *ptrBgA, int *ptrEnA, int *ptrBgB, int *ptrEnB, int *ptrBgc){

    while (*ptrBgA != *ptrEnA && *ptrBgB != *ptrEnB)
    {
        if(*ptrBgA <= *ptrBgB){
            *ptrBgc = *ptrBgA;
            *ptrBgA++;
        }
        else{
            *ptrBgc = *ptrBgB;
            *ptrBgB++;
        }
        *ptrBgc++;
    }
    // Copy the remaining elements of
    // *ptrBgA, if there are any
    while (*ptrBgA != *ptrEnA) {
        *ptrBgc = *ptrBgA;
        *ptrBgA++;
        *ptrBgc++;
    }
 
    // Copy the remaining elements of
    // *ptrBgB, if there are any
    while (*ptrBgB != *ptrEnB) {
        *ptrBgc = *ptrBgB;
        *ptrBgB++;
        *ptrBgc++;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 5;
    int a[n] = {2,4,6,8,9};
    int b[n] = {3,5,7,10,14};
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
