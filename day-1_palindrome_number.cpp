/*
 * DATE: 02/11/2026
 *
 * PROBLEM LINK: 
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

#include <bits/stdc++.h>
using namespace std;
  
  
  
   
int main (){ {
        int x;
        cin >> x;
        if (x<0){
            cout << "false";
            return 0;
        }
        int temp=x;
        long long rev=0;
        

        while(x>0){
            int rem= x % 10;
            rev=rev*10+rem;
            x = x /10 ;

        }

        if(rev==temp){
            cout << "true" ;

        }
        else{
            cout << "false";
        }
        
    }

        
    
};