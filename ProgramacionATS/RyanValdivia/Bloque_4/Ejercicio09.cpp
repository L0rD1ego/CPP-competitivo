#include <iostream>
using namespace std;

int main(){
    int n, fac = 1;
    cin >> n;
    for(int i = 1; i < n + 1; i++){
        fac *= i;
    }
    cout << fac;
    return 0;
}