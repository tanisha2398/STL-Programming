#include<bits/stdc++.h>
using namespace std;
 int singleEle(int arr[],int n)
 {
 	int res=arr[0];
 	for(int i=1;i<n;i++)
 	{
 		res=res^arr[i];
	 }
	 return res;
 }

int main(){
	int arr[]={2,3,5,4,5,3,4};
	int n =sizeof(arr)/sizeof(arr[0]);
	cout<<singleEle(arr,n);
	return 0;
}
