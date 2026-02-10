#include<iostream>
using namespace std;
int main(){
	int i,factorial=1;
	int number;
	cout<<"enter the number";
	cin>>number;
	for(i=1;i<=number;i++){
		factorial*=i;
	}
	cout<<"Factorial of given number is "<<factorial;
	
//	int n;
//	cout<<"enter the value of n";
//	cin>>n;
//	int i,sum=0;
//	for(i=1;i<=n;i++){
//		if(i%3==0){
//			sum+=i;
//		}	
//	}
//	cout<<"Sum is "<<sum<<endl;
return 0;
}
