#include<iostream>
using namespace std;
int main(){
	int number,i,count;
	cout<<"enter a number"<<endl;
	cin>>number;
	void prime(){
	for(i=2;i<=number;i++){
		if(number%i==0){
		 return i;	
		}else {
			cout<<i;
		}
	}
}
	return 0;
}
