#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if (d == a || d == b || d == c) cout<<"El último número si coincide"<<endl;
    else cout<<"No coincide"<<endl;
    system("pause");
    return 0;
}