#include <iostream>
using namespace std;
int main(){
	int a[3][3];
	int b[3][3];
	int c[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin>>b[i][j];
		}
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			int res = 0;
			for(int k = 0; k < 3; k++){
				res += a[i][k]*b[k][j];
			}
			c[i][j] = res;
		}
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}