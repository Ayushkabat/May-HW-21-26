#include<iostream>;
using namespace std;

int main(){
	
	int num, i=2;
	cout<<"Enter your number: ";
	cin>>num;
	
	bool prime = true;
	
	while(i<num){
		if(num%i==0){
			prime = false;
			break;
		}
		i++;
	}
	
	if(prime){
			cout<<num<<" is a prime number";
		}else{
			cout<<num<<" is a not prime number";
			
		}
	
	
	return 0;
}
