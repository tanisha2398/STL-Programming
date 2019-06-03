#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	int a=0,b=1,c;
	for(int i=2;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return b;
	
}
int main(){
	int n=9;
	cout<<fib(n);
	return 0;
}
