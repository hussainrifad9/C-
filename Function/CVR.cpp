// Call by value and call by reference in C++
#include<bits/stdc++.h>

// Here we are using pointer to to get the value 

int square(int *y) {
    
    int sq = (*y) * (*y);
    return sq ; 
} 


int main() {

    int x = 10;

    // Here we are printing the address of 'x'
    std :: cout << &x << std :: endl; 

    // we are passing the address in a function 
    std :: cout << square(&x);

    return 0;
}