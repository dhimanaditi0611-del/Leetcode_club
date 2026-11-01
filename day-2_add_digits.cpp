/*
 * DATE: 02/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/add-digits/submissions/2187273657/?envType=problem-list-v2&envId=math
 * PROBLEM STATEMENT: 
 *
 * ----------------------------------------
 * Write statement notes here
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 *
 * ----------------------------------------
 * Write insights here
 * ----------------------------------------
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n>=10){
        int rev=0;
        while(n>0){
            int digit=n%10;
            rev=digit+rev;
            n=n/10;
            
            
        }
        n=rev;
        
    }
    cout << n;
}