#include<bits/stdc++.h>
using namespace std;
int y = 2; //global

int main()
{
    //if-elseif-else

    //scope
    {
        int x = 5;
        cout<<x<<endl;
    }
    // cout<<x<<endl; out of scope

    //loops => use for loop for scoping of i in for, so it won't bug outside the program
    //break & continue

    /* Get last digits of a number: 12345
        1. get last 1 digit: num = num % 10^x (x = wanted digit count, here it's 1) 
        2. get last 3 digit: num = num % 10^3 => num = num % 1000
    */
    /* Remove last digits of a number: 12345
        1. remove last 1 digit: num = num / 10^x (x = wanted digit count, here it's 1) 
        2. remove last 3 digit: num = num / 10^3 => num = num / 1000
    */

    return 0;
}

/*
easy:
 1. https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem
 2. https://www.spoj.com/problems/TEST/
 3. https://www.codechef.com/problems/FLOW006
 4. https://www.codechef.com/LRNDSA01/problems/FLOW007
 5. https://www.hackerearth.com/problem/algorithm/mangoes/
 6. https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/
 7. https://www.hackerrank.com/challenges/fizzbuzz/problem
 8. https://codeforces.com/problemset/problem/610/A
 
easy-medium:
 1. https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/friends-relationship-1/
 2. https://codeforces.com/contest/1102/problem/A

medium:
 1. https://www.hackerrank.com/challenges/printing-pattern-2/problem

*/