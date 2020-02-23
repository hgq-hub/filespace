#include<iostream>
using namespace std;
long long lcm(int a,int b){
	long long i,j;
	i=j=max(a,b);
	while(i%a!=0||i%b!=0){
		i+=j;
	}
	return i;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<lcm(a,b);
	return 0;
}
