#include <iostream>
using namespace std;
int main(){
	int n;
	int sum = 0;
	cin>>n;
	for(int i = 0; i <= n; i++){
		if(i%2==0){
			sum += -i;
		} else{
			sum += i;
		}
	}
	cout<<"La suma es " <<sum<<endl;
}