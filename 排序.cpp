#include <iostream>
using namespace std;
int main(){
	int i,j,k,n,min,temp;
	cin>>n;
	int *t=new int[n];
	for(i=0;i<n;++i){
		cin>>t[i];
	}
	for(i=0;i<n-1;i++){
		min=t[i];
		k=i;
		for(j=i+1;j<n;j++){
			if(t[j]<min){
				min=t[j];
				k=j;
			}
		}
		temp=t[i];
		t[i]=min;
		t[k]=temp;
		cout<<min<<" ";
	}
	cout<<t[n-1];
	return 0;
}

