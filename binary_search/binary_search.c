#include<stdio.h>

int bsearch(int a[],int n,int k){
  int mid,low,high,i;
	low=0;
	high=n-1;
	while(low<=high){
		mid=(high+low)/2;
		if(a[mid]==k)
			return mid;
		else if(a[mid]>k)
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}

int main(){
	int a[]={4,12,78,3,90};
	int size=sizeof(a)/sizeof(a[0]);
	int k=4;
	int result=bsearch(a,size,k);
	if(result==-1)
		printf("Not Found\n");
	else
		printf("Element %d found at index %d \n",k,result);
	return -1;
}
