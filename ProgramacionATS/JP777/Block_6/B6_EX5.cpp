#include <iostream>
using namespace std;
int main(){
  int m[3][3];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cout<<"Row "<<i + 1<<", Column "<<j + 1<<": ";
      cin>>m[i][j];
    }
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cout<<m[j][i];
    }
    cout<<endl;
  }
}
