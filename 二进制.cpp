#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int i,j,k,l,r,sum;
	int a[100001],t[18];
	cin>>l>>r;
	a[0]=0,a[1]=1;
	sum=t[0]=1;
	k=0;i=1;
	do{
		t[i]=sum*2;
		sum=t[i];
	}while(t[i++]<r);
	k=i-1;
	for(i=1;i<k;i++){
		for(j=t[i];j<(t[i]+t[i+1])/2;j++){
			a[j]=a[j-t[i-1]];
			a[j+t[i-1]]=a[j]+1;
		}
	}
	sum=0;
	for(i=l;i<=r;i++){
		sum+=a[i];
	}
	cout<<sum;
	return 0;
}
