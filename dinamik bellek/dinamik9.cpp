#include<iostream>

using namespace std;

int main(){
	int*ptr	= new int;
	*ptr=7;
	cout<<"ptr degeri: "<< *ptr<<endl;
	
	delete ptr;
	//*ptr=NULL;
	
	cout<<"sarkan isaretci degeri: "<< *ptr<<endl;
	delete ptr;
	
	cout<<*ptr;
	
	return 0;
}
