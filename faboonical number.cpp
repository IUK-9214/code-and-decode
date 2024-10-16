#include<iostream>
using namespace std;
int main(){
	
	int num1=0;
	int num2=1;
	cout<<num1<<" "<<num2<<" ";
	for(int i=0; i<8 ;i++){
		int newnumber=num1+num2;
		cout<<newnumber<<" ";
		num1=num2;
		num2=newnumber;
		
	}
	cout<<endl;
	return 0;
}
