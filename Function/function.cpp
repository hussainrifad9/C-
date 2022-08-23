// function two type 1.Library Functions 2.User-defined functions
// we will create some function here
// Advantages 1) Code Reusability. 2) Code optimization.

#include<bits/stdc++.h>

// function for sum

void SumOfNumber(int p, int q, int r) {

    int sum = p + q + r ;
    std :: cout << sum ;
}


int main() {

    int a, b, c;
    a = 10 ;
    b = 30 ;
    c = 20 ;

    // calling function
    SumOfNumber(a, b, c);

    return 0;
}