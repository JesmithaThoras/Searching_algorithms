#include<stdio.h>

int search(int a[],int n,int k){
	int i;
	for(i=0;i<n;i++){
		if(a[i]==k)
			return i;
	}
	return -1;
}

int main(){
	int a[]={4,12,78,3,90};
	int size=sizeof(a)/sizeof(a[0]);
	int k=90;
	int result=search(a,size,k);
	if(result==-1)
		printf("Not Found\n");
	else
		printf("Element %d found at index %d \n",k,result);
	return -1;
}
