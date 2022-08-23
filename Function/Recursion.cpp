// When function is called within the same function, it is known as recursion in C++.
// in this program we are going to calculate the total sum from 1-10 

#include<bits/stdc++.h>

int TotalSum(int x) {

    // Base case 

    if ( x <= 1 ) {
        return 1;
    }
    else
    {   
        int sum = x + TotalSum(x-1);

        return sum;
    }
}

int main() {

    int a ;
    std :: cin >> a;
    std :: cout << TotalSum(a);
    return 0;
}