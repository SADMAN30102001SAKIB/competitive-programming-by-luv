#include<bits/stdc++.h>
using namespace std;

int main()
{
    //string str = ""; is a string
    //str[0] = ''; is a character
    //str.size() == str.length()
    string s1, s2;
    cin>>s1>>s2;
    string s3 = s1 + " " + s2;
    cout<<s3<<endl;
    //or
    string s4;
    getline(cin, s4);
    cout<<s4<<endl;

    int t1;
    cin>>t1;
    while (t1--)
    {
        string s;
        getline(cin, s);
        cout<<s<<endl; //will print 1 line less, because after getting t with cin, getline takes that new line & rest 2 lines
    }

    //fix1:
    int t2;
    cin>>t2;
    t2++;
    while (t2--)
    {
        string s;
        getline(cin, s);
        cout<<s<<endl; 
    }

    //fix2:
    int t3;
    cin>>t3;
    cin.ignore(); //moves the cursor to new line
    while (t3--)
    {
        string s;
        getline(cin, s);
        cout<<s<<endl; 
    }
    
    //reverse string
    string str1;
    cin>>str1;
    string rev1;
    for (int i = str1.length() - 1; i >= 0 ; i--)
    {
        rev1 += str1[i]; //don't do it, because of time complexity & char is getting into string type
    }
    cout<<rev1<<endl;;

    //fix:
    string str2;
    cin>>str2;
    string rev2;
    for (int i = str2.length() - 1; i >= 0 ; i--)
    {
        rev2.push_back(str2[i]);
    }

    cout<<rev2<<endl;

    //stoi & to_string -> good to know
    

    return 0;
}

/*
practice:
 1. https://www.hackerrank.com/challenges/c-tutorial-strings/problem
 2. https://practice.geeksforgeeks.org/problems/reverse-a-string/1
 3. https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/
 4. https://practice.geeksforgeeks.org/problems/remove-character3815/1
 5. https://leetcode.com/problems/goal-parser-interpretation/
 6. https://www.codechef.com/problems/STONES
 7. https://leetcode.com/problems/student-attendance-record-i/

more:
 1. https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/1/?sort_by=partially+solved&p_level
    -> ! https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/string-queries-1/
    -> ! https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/swapping-game-6/
    -> ! https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/dont-jump/
    -> ! https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/missing-alphabets-1/
    -> ! https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/find-the-substrings/
    -> ! https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/make-the-cheapest-palindrome-1/
*/