#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>
#include <sstream>

using namespace std;

int cnt = 0; 

// void swap(int *a, int &b) {  
//   int c = *a;  
//   *a = *b;  
//   *b = *c;  
//  }

// void swap(int *a, int *b) {  
//   int c = *a;  
//   *a = *b;  
//   *b = *c;  
//  }

// 3
// void swap(int *a, int &b) {  
//   int c = *a;  
//   *a = b;  
//   b = c;  
//  }

//4
// void swap(int *a, int *b) {  
//   int *c = a;  
//   a = b;  
//   b = c;  
//  }

//5
// void swap(int &a, int &b) {  
//   int c = a;  
//   a = b;  
//   b = c;  
//  }

//6
// void swap(int &a, int &b) {  
//   int c = a;  
// a = b;  
//   b = a;  
//  }

//
// void swap(int &a, int &b) {  
//   int c = a;  
//   a = c;  
//   b = a;  
//  }


// void swap(int a, int &b) {  
//   int c = a;  
//   a = b;  
//   b = c;  
//  }

//9
// void swap(int *a, int *b) {  
//   int c = *a;  
//   *a = *b;  
//   *b = c;  
//  }


void BadSort(vector <int> &a) {  
    int n = a.size();  
    for (int i = 0, j = i + 1; j < n; ++i,++j) {
            swap(a[i], a[j]);
    }  
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> a {10,9,8,7,6,5,4,3,2,1};

    BadSort(a);

    for (int d : a)
    {
        cout << d << " "; 
    }
    
}   
