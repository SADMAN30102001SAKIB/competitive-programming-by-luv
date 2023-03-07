#include <bits/stdc++.h>
using namespace std;

int main() {
    //time complexity
    
    int x; //1st iteration
    cin>>x; //2nd iteration
    int sum = 2*x; //3rd iteration
    //till now number of iteration = 3
    //O(3)

    for (int i = 0; i < x; i++)
    {
        int y;
        y = 5;
        y++;
    }
    //O(3) + O(3*x), let x be a big number
    //so, O(3) << O(x) & O(3*x) ~ O(x) => O(x) till now

    //O(n) + O(n) = O(n)
    //O(1 or 2 or 3 ... k) = O(1)
    //O(k*n) & k << n, so O(k*n) = O(n)
    //10^7 - 10^8 iteration runs in 1s in CP websites

    int n; 
    cin >>n; //n < 1e5
    int a[n]; // a[i] < 1e5
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    //3*O(1) + 3*O(n) = 3*O(n) = O(n) = 1e5 iteration, so under 1s

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
    }
    //O(n^2) = 1e10, so runs > 1s & will take 1000

    int m;
    cin>>m; //m < 1e5 
    while (m>0)
    {
        m = m/2;
    }
    //let m = 10 => 10 - 5 - 2 - 1, 3 steps to reach 1
    //let m = 8 => 8 4 2 1, 3 steps to reach 1, so 2^3 = n, 3 = log2(n)
    //O(log2(n))

    int o;
    cin >>o;
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < i; j++)
        {
            //something
        }
        
    }
    //1st time - 0 itr
    //2nd time - 1 itr
    //oth time - (o - 1) itr // 0 + 1 + 2 + ... + o-1
                             // 1 + 2 + 3 + ... + o-1 + o - o
                             // (o*(o+1))/2 - o = (o^2)/2 + o/2 - o
    //O((o^2)/2 + o/2 - o) = O(o^2)

    int t;
    cin >>t; // t <= 1e5
    while (t--)
    {
        int n;
        cin >>n; // n <= 1e5
        for (int i = 0; i < n; i++)
        {
            
        }
        
    }
    //O(t*n) = O(n^2) > 1s
    //what if, sum of n over all test cases < 1e7
    //So, 1st -> n0, 2nd -> n1, ... 't'th -> nth = n0 + n1 + ... + nth = t*n < 1e7
    //O(t*n) <= 1s

    //space complexity
    
    int b = 1e4; // O(1) space
    int ar[b] = {0}; // O(b) space
    int arr[b][b] = {0}; // O(b^2) space
    
    return 0;
}