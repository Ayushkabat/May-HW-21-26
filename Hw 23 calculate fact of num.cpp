#include<iostream>;
using namespace std;

int main(){
	
	int num,i=1, fact=1;
	
	cout<<"Enter your number: ";
	cin>>num; 


	while(i<=num){
		
		fact=fact*i;
		i++;
	}
		cout<<"Factorials of "<<num<<" : "<<fact<<endl;
		
//esvel
/*	for(;i<=num;i++){
		
		fact=fact*i;
		
	}
		cout<<"Factorials of "<<num<<" : "<<fact<<endl;
*/
	
	return 0;
}
