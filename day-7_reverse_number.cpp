/*
 * DATE: 06/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/reverse-integer/
 * PROBLEM STATEMENT: Reverse Number
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
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int r = 0;
        while(x!=0){
            int d=x%10;
            x/=10;
            if(r>INT_MAX/10||(r==INT_MAX/10&&d>7))
                return 0;
            if(r<INT_MIN/10||(r==INT_MIN/10&&d<-8))
                return 0;
            r=r*10+d;
        }
        return r;
    }
};