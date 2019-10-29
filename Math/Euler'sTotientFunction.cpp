#include <bits/stdc++.h> 
using namespace std;
  
int gcd(int a, int b);  
// A simple method to evaluate Euler Totient Function 
int phi(unsigned int n) 
{ 
    unsigned int result = 1; 
    for (int i = 2; i < n; i++) 
        if (gcd(i, n) == 1) 
            result++; 
    return result; 
} 

// Function to return gcd of a and b 
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
// Driver program to test above function 
int main() 
{ 
    int n; 
    for (n = 1; n <= 5; n++) 
        cout<<"phi of "<<n<<" = "<<phi(n)<<endl;
    return 0; 
} 
