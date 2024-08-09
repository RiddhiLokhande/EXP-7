#include<iostream> 
#include<string> 
using namespace std; 
 
int main() { 
    string a; 
    cout << "Enter a string: "; 
    cin >> a; 
    int n = a.length();
    bool isPalindrome = true;
    
    for(int i = 0; i < n / 2; i++) { 
        if(a[i] != a[n - i - 1]) { 
            isPalindrome = false;
            break;
        } 
    } 
    
    if(isPalindrome) { 
        cout << a << " is a palindrome"; 
    } else { 
        cout << a << " is not a palindrome"; 
    } 

    return 0;
} 
