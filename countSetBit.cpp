#include<bits/stdc++.h>
using namespace std;

int countsetbit(int n)
{
	int count=0;
	if(n==0)
	{
		return 0;
	}
	else
	{
		while(n!=0)
		{
			n=n & n-1;
			count++;
		}
	}
	return count;
}


int main()
{
	int n=9;
	cout<<countsetbit(n);
	return 0;
}
