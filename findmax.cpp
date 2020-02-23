#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int i,k,n,max,a[100];
	cin>>n;
	k=0;
	for(i=1,cin>>a[0],max=a[0];i<n;i++){
		cin>>a[i];
		if(a[i]>max){
			max=a[i];
			k=i;
		}
	}
	cout<<k;
	return 0;
}
