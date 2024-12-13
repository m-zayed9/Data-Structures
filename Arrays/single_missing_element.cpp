#include <bits/stdc++.h>

using namespace std;


int main() {

    int n=10 , a[] = {1,2,3,5,6,7,8,9,10};
    int sum  = 0;
    for(int i = 0 ; i < n-1 ; i++) {
        sum += a[i];
    }
    cout << (n*(n+1))/2 - sum << endl;
}