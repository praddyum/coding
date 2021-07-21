#include <bits/stdc++.h>
using namespace std;

class A{
	public:
		void show(){
			cout<<"This is A";
		}
};

class B:public A{
	public:
		void show(){
			cout<<"This is B";
		}
};

int main(){

	A a;
	B b;
	A *k;
	k=&a;
	k->show();
	k=&b;
	k->show();
	return 0;
}
