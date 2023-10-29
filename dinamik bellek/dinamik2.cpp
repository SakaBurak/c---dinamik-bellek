#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main(int argc, char** argv){
	int *ptr1=NULL , *ptr2=NULL;
	ptr1=(int *)malloc (sizeof(int));
	printf("Ptr1'de tutulan adres: %p\n",ptr1);
	printf("Ptr2'de tutulan adres: %p\n",ptr2);
	
	ptr2=ptr1;
	printf("Ptr1'de tutulan adres: %p\n",ptr1);
	printf("Ptr2'de tutulan adres: %p\n",ptr2);
	*ptr1=10;
	printf("Ayrilan bellek alaninin degeri: %d\n",*ptr2);
	*ptr2=20;
	printf("Ayrilan bellek alaninin degeri: %d\n",*ptr1);
	free(ptr1);
	return 0; 
	}
