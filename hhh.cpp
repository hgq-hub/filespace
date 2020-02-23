#include<iostream>
using namespace std;
int main(){
	int m,n,r;
	cin>>m>>n;
	for(;m>0;){
		r=m%n;
		m=n;
		n=r;
		if(r==0){
			cout<<m;
			break; 
		}
	} 
	return 0;
}
