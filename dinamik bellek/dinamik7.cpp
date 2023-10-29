#include<iostream>

using namespace std;

int main(){
	int *pr=NULL;
	int n;
	cout<< "Dizi boyutu:";
	cin>>n;
	pr=new int[n];
	for(int i=0;i<n;i++){
		pr[i]=i*2;
		cout<<"pr["<<i<<"]"<<pr[i]<<endl;
	}
	delete [] pr;
	pr=NULL;
	cout<<"pr silindi, degeri:"<<pr<<endl;
	return 0;
}
