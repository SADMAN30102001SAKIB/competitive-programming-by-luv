#include<bits/stdc++.h>
using namespace std;

int main()
{
    /* precison:
        1. double
        2. float
        3. long long int
        4. long int
        5. int
        6. char
    */

    cout<< 7 / 2<<endl; //3
    cout<< 7 / 2.0<<endl; //3.5 
    cout<<'c' + 1<<endl; //100
    
    int a = 3/2.0;
    cout<<a<<endl; //1
    double b = 3/2;
    cout<<b<<endl; //1

    /* precision:
        1. * / % (left to right)
        2. + - (left to right)
        3. << >> (left to right)
        4. & (left to right)
        5. ^ (left to right)
        6. | (left to right)
    */

    int c = 3 * 7 / 2;
    cout<<c<<endl; //10
    c = 7 / 2 * 3;
    cout<<c<<endl; //9

    /* rough range:
        -10^9 < int < 10^9
        -10^12 < long int < 10^12
        -10^18 < long long int < 10^18
    */

    int max = INT_MAX;
    cout<<max; //2147483647
    max = INT_MAX + 1;
    cout<<endl<<max<<endl; //overflow + warning
    max = INT_MAX;
    cout<<max + 1<<endl; // INT_MIN < int < INT_MAX //only overflow & reverse back
                         // ^                     |
                         // |_________+1__________|

    int d = 1e+5; // 1 * 10^5
    int e = 1e+5;
    int f = d*e;
    cout<<f<<endl; //overflow | fix: use long or long long 
    
    int g = 1e+5, h = 1e+5;
    long int i = g*h; 
    cout<<i<<endl; //overflow | fix: use long or long long for all variables or 1LL

    long long int j = 1e+5, k = 1e+5;
    long long int l = j*k; 
    cout<<l<<endl; //10000000000

    int m = 1e+5, n = 1e+5;
    long long int o = m * 1LL * n; 
    cout<<o<<endl; //10000000000

    /* double vs long long
       double's accuracy is low although it stores big number.
       So, always use long long for int type data.
    */

    double p = 1e+12, q = 1e+12, r = p*q;
    cout<<r/*right ans, but still don't use double while working with big int*/<<endl;
    cout<<fixed<<r/*wrong ans*/<<endl; //fixed: removes e or 10^
    cout<<setprecision(0)<<r<<endl; //precision(0): removes point

    long long s = 1e+9, t = 1e+9, u = s*t;
    cout<<u<<endl;


    return 0;
}
