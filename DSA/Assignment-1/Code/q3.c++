#include <bits/stdc++.h>
using namespace std;

int main(){
    //declaring variables for storing name and number : 
    string name, number , ans;
    bool found = false ;

    //taking inputs : 
    while(cin >> name){
        cin >> number ;
        if(number == "103101"){
            ans = name ;
            found = true ;
        }
    }

    //condition to print 
    (found)?cout << "Student register number 103101 exists" + ans: cout << "Student register number 103101 does not exist";
    return 0 ;
}

//Time complexity :
// # Worst Case : O(n) , All the names and roll numbers have to be iterated once. The worst case corresponds when the roll number does not match with the key. 
// # Best Case : O(1) , If the reuired roll number is found on the first index , the number of operations req will be 1
