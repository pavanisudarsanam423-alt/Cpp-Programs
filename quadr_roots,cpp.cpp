#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter co-efficients of quadriatic equation"<<endl;
	cin>>a>>b>>c;
	int D=b*b-4*a*c;
	if(a==0){
		cout<<"This is not a Quadriatic equation"<<endl;
	}
	float root1,root2;
	if(D==0){
		cout<<"Roots are real and equal"<<endl;
		root1=root2=(-b)/2*a;
		cout<<"Root 1="<<root1;
		cout<<"Root 2="<<root2;
	}
	else if(D>0){
		cout<<"Roots are real and distinct"<<endl;
		root1=((-b)+sqrt(D))/(2*a);
		root2=((-b)-sqrt(D))/(2*a);
		cout<<"Root1="<<root1;
		cout<<"Root2="<<root2;
	}else{
			float realpart=(-b)/(2*a);
	        float imgpart=sqrt(-(D))/(2*a);
		cout<<"root1="<<realpart+((imgpart))<<endl;
		cout<<"root2="<<realpart-((imgpart))<<endl;
	}
}

