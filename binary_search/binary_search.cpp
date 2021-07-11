#include<bits/stdc++.h>
using namespace std;
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
		cout<<"Not Found"<<endl;
	else
		cout<<"Element "<<k<<" found at index "<<result<<endl;
	return -1;
}
