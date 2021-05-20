#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

struct vectorMy
{   
    int* a;
    int capacity;
    int current;

    vectorMy(int n){;
        a = new int[n];
        capacity = n;
        current = n-1;

        for (int i = 0; i < n; i++)
            a[i] = 0;         
    }

    vectorMy(int n, int val){
       a = new int[n];
        capacity = n;
        current = n-1;

        for (int i = 0; i < n; i++)
            a[i] = val; 
    }

    void push_back(int val){
        // if the number of elements is equal to the
        // capacity, that means we don't have space to
        // accommodate more elements. We need to double the
        // capacity
        if (current == capacity) {
            int* temp = new int[2 * capacity];
 
            // copying old array elements to new array
            for (int i = 0; i < capacity; i++) {
                temp[i] = a[i];
            }
 
            // deleting previous array
            delete[] a;
            capacity *= 2;
            a = temp;
        }
 
        // Inserting data
        a[current] = val;
        current++;
    }

    void pop_back(){
        current--;
    }

    int get(int i){
        if (i < current)
            return a[i];
    }

    int size(){
        return current;
    }

};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vectorMy v(10,17);    

    for (int i = 0; i < v.size(); i++)
        cout << v.get(i) << " ";
    cout << endl;
    
}   
