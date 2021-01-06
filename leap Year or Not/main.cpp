//
//  main.cpp
//  leap Year or Not
//
//  Created by Marwan Khalid on 1/6/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    while (true) {
        int year = 0;
        cout<<"Enter Any Year \n";
         
        if (year == 0) {
            return 0;
            break;
        }
         bool flag = false;
         if(year % 4 == 0){
           flag = true;
           if (year % 100 == 0){
             if ((year % 400) == 0){
                 //cout<<year<<" is a leap year";
             }else{
               //cout<<year<<" is not a leap year";
             }
           }else{
             //cout<<year<<" is a leap year";
           }
         }else{
           //cout<<year<<" is not a leap year";
           flag = false;
         }
         
         if (flag){
           cout<<"Yes\n";
         }else{
           cout<<"No\n";
         }
        
    }
    
}
