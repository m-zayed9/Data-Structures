#include <bits/stdc++.h>

using namespace std;


int main() {

    int a[] = {1,2,3,5,7,8,9,10};
    int diff = a[0] ,  n = sizeof(a)/sizeof(int);
    for(int i = 0 ; i < n; i++) {
        if(a[i] - i != diff)
            while(diff < a[i] - i){
                cout << i + diff << endl;
                diff++;
            }
    }
    return 0;
}