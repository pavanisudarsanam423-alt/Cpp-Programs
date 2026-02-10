#include<iostream>
using namespace std;
class Demo{
	private:
	int x,y;
	void add(){
		cout<<"I am in add function"<<add()<<endl;
	}
	friend add(Demo d);
};
void Demoone(Demo d){
	d.x=25;
	d.y=25;
	cout<<"The sum is:"<<d.x+d.y<<endl;
}
int main(){
	Demo ob;
	add(ob);
	return 0;
}
