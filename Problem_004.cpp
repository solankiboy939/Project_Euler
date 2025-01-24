// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int LargestPal(int n){
    int orig = n, rev = 0;
    while(n > 0){
        rev = rev * 10 + n%10;
        n /= 10;
    }
    return orig == rev;
}
int main() {
    int Lpal = 0;
    for(int i = 999; i >= 100; i--){
        for(int j = i; j >= 100; j--){
            int product = i*j;
            if(product <= Lpal) break;
            if(LargestPal(product)){
                Lpal = max(Lpal,product);
            }
        }
    }
    cout<<Lpal;
}
