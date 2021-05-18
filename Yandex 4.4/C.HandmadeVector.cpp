#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

template <typename T> struct vectorMy
{   
    T* a;
    int capacity;
    int current;

    vectorMy(int n){;
        a = new T[n];
        capacity = n;
        current = 0;

        for (int i = 0; i < n; i++)
            a[i] = 0;         
    }

    vectorMy(int n, int val){
       a = new T[n];
        capacity = n;
        current = 0;

        for (int i = 0; i < n; i++)
            a[i] = val; 
    }

    void push_back(int val){
        // if the number of elements is equal to the
        // capacity, that means we don't have space to
        // accommodate more elements. We need to double the
        // capacity
        if (current == capacity) {
            T* temp = new T[2 * capacity];
 
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

    T get(int i){
        if (i < current)
            return a[i];
    }

    T size(){
        return current;
    }

};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vectorMy<int> v = vectorMy<int>(10, 17);
    v.push_back(11);
}   
