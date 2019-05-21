#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> arr;
	for(int i =0;i<20;i++){
		arr.push_back(3);
	}
	for(int i =0;i<20;i++){
		cout<<arr[i]<<"  ";
	}
	vector<int>:: iterator itr = arr.begin();
	while(itr != arr.end()){
		cout<< *itr;
		itr++;
	}
	
	
	return 1;
}
