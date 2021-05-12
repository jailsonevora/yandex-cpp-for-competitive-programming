//Which functions does not cause compilation errors nor implicit type conversion?
void f(int a, int b) {  
    return a + b;  
}
int f(double a, double b) {  
    return a + b;  
}
int f(int a, int b) {  
    return a + b;  
}
long long f(int a, int b) {  
    return a + b;  
}
void f(int a, int b) {  
    int c = a + b;  
    return;  
}