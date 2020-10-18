// C++ program for space optimized Dynamic Programming 
// Solution of Binomial Coefficient 
#include<bits/stdc++.h> 
using namespace std; 
  
int binomialCoeff(int n, int k) 
{ 
    int C[k+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1;  // nC0 is 1 
  
    for (int i = 1; i <= n; i++) 
    {
        for (int j = min(i, k); j > 0; j--) 
            C[j] = C[j] + C[j-1]; 
    } 
    return C[k]; 
} 

int main() 
{ 
    int n , k;
    cin >> n >> k;
    printf ("Value of C(%d, %d) is %d ", n, k, binomialCoeff(n, k) ); 
    return 0; 
}
