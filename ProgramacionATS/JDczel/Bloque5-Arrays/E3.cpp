#include<iostream>

using namespace std;

int main(){
  int array[100];
  int n;
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>array[i];
  }
  for(int i = 0; i < n; i++){
    cout<<i<<" --> " <<array[i];
  }
  return 0;
}
