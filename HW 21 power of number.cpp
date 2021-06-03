#include<iostream>;
using namespace std;

int main(){
	
	int num,Pow, result=1;
	cout<<"Enter number: ";
	
	cin>>num; 
	
	cout<<"Enter power number: ";
	
	cin>>Pow;
	
	
	for(;Pow>0;Pow--){
		result = result*num;
	}
	cout<<"Result: "<<result;
	
	
	
	
	
	
	
	return 0;
}
