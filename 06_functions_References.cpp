#include<bits/stdc++.h>
using namespace std;

void increment(int &n, int m){
    n++;
    m++;
}

void func1(string s){
    s = "";
}

void func2(int a[][20]){
    a[0][0] = 4;
}

// void func3(int n, int m, int a[][m]){

// } // not a valid thing to do, so we shouldn't pass 2D array in function in CP. So, in this case we can declare the array globaly

int main()
{
    //pointers
    
    //references

    int a = 3, b = 5;
    cout<<a<<endl;
    increment(a, b);
    cout<<a<<" "<<b<<endl;
    
    //funtions
    swap(a, b);
    cout<<a<<" "<<b<<endl;
    cout<<max(a, b)<<" "<<min(a, b)<<endl;

    string s = "sakib";
    func1(s);
    cout<<s<<endl; //no change, because pass by value - we need to do pass by reference, func(string &s) - but array doesn't follow this

    int arr[10][20];
    arr[0][0] = 7;
    cout<<arr[0][0]<<endl;
    func2(arr); //by default pass by reference
    cout<<arr[0][0]<<endl;


    return 0;
}

/*
contest: https://assessment.hackerearth.com/challenges/college/iiit-allahabad-test-draft-2-15/problems/
*/