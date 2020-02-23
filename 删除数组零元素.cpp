#include<iostream>
using namespace std;
int CompactIntegers(int *a,int b){
	int i,j,n;
	j=n=0;
	for(i=0;i<b;i++)
		if(a[i]!=0)
			a[j++]=a[i];
	return j;
}
int main(){
	int  n,s;
	cin>>n;
	int *t=new int[n];
	for(int i=0;i<n;i++)
		cin>>t[i];
	s=CompactIntegers(t,n);
	cout<<s<<endl;
	for(int i=0;i<s;i++){
		if(i==s-1)
			cout<<t[i];
		else cout<<t[i]<<' ';
	}
	return 0;
}
