#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main(int argc, char** argv){
	int *ptr1=NULL , *ptr2=NULL;
	ptr1=(int*)malloc(sizeof(int));
	printf("ptr1'de tutulan adres; %p\n",ptr1);
	printf("ptr2'de tutulan adres; %p\n",ptr2);
	
	ptr2=(int*)malloc(sizeof(int));
	printf("ptr1'de tutulan adres; %p\n",ptr1);
	printf("ptr2'de tutulan adres; %p\n",ptr2);
	
	*ptr1=24;
	printf("ptr1 icin ayrilan bellek alaninin degeri: %d\n",*ptr1);
	
	*ptr2=325;
	printf("ptr1 icin ayrilan bellek alaninin degeri: %d\n",*ptr1);
	printf("ptr2 icin ayrilan bellek alaninin degeri: %d\n",*ptr2);
	*ptr1=*ptr2;
	printf("ptr1 icin ayrilan bellek alaninin degeri: %d\n",*ptr1);
	free(ptr1);
	return 0;
}
