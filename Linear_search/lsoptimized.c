#include<stdio.h>

int search(int a[],int n,int k){
	int l=0,r=n-1,i,flag=0;
	for(l=0;l<=r;){
		if(a[l]==k){
			printf("Element %d found at %d\n",k,l);
			flag=1;
			return flag;
		}
		else if(a[r]==k){
			printf("Element %d found at %d\n",k,r);
			flag=1;
			return flag;
		}
		else{
			l++;
			r--;
		}
	}
	return flag;
}

int main(){
	int a[]={12,67,3,89,34,2,1};
	int size=sizeof(a)/sizeof(a[0]);
	int k=89;
	int result=search(a,size,k);
	if(result==0)
		printf("Not Found\n");
	return -1;
}
