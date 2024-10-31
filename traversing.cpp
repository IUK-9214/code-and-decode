#include<iostream>
using namespace std;
int main(){
	int num[5]={2,7,6,9,1};
	int max ;
	int min;
	max=num[0];
	min=num[0];
	for(int i=0; i<5;i++){
		if (num[i]>max){
			max=num[i];
		}	
	}
	cout<<"your max number is :"<<max<<endl;
	for(int i=0; i<5;i++){
		if (num[i]<min){
			min=num[i];
		}	
	}
	cout<<"your min number is :"<<min<<endl;

return 0;	
}
