#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*Errors:
        1. Compilation error: syntax problem

        2. Memory limit exceeded: commonly if a program takes > 256MB, like => int a[1e8]

        3. Runtime error: either illegal access of memory like => int a[n]; cout<<a[-1]; or cout<<a[n]; or undefined behavior like, int a = 1/0; 
           or stack overflow for recursion like, int func(int i){func(i+1); func(i+2); func(i+3);} => this can also throw MLE

        4. Time limit exceeded: _____compilation______        ___execution___
                                |                    |        |             |
                                a.cpp --- g++ ---> a.out === input ---> output
                                |                    |        |             |
                                |____compilation_____|        |__execution__|
                                        time                       time
                                This includes header files    This run the program
                                & compile program             from input to output
                                                              & might cause TLE
    */

    return 0;
}
