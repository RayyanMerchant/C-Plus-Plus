#include <bits/stdc++.h> 
using namespace std; 
#define MAX 1000 

bool wax[MAX + 1][2]; 

bool search(int X);
void insert(int a[], int n);

int main() 
{ 
    int arr[] = { 1,2,3,4,-5,6,7 }; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    insert(arr,n); 
    int X = -5; 
    if (search(X) == true) 
       cout << "Present";  
    else
       cout << "Not Present"; 
    return 0; 
} 

void insert(int a[], int n) 
{ 
    for (int i = 0; i < n; i++) { 
        if (a[i] >= 0)  
            wax[a[i]][0] = 1; 
       else
            wax[abs(a[i])][1] = 1; 
    } 
} 

bool search(int X) 
{ 
    if (X >= 0) { 
        if (wax[X][0] == 1) 
            return true; 
        else
            return false; 
    } 
    X = abs(X); 
    if (wax[X][1] == 1) 
        return true; 
  
    return false; 
} 
  


