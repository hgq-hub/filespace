#include<iostream>
using namespace std;
int main(){
	int n,i,j,k,m,s,r,max;
	cin>>n;
	int *a=new int[n];
	for(i=0;i<n;++i)
		cin>>a[i];
	cin>>m;
	int **t=new int*[m];
	for(i=0;i<m;++i){
		t[i]=new int[3]; 
		for(j=0;j<3;++j)
			cin>>t[i][j];
	}
	for(i=0;i<m;++i){
		int *b=new int[t[i][1]-t[i][0]+1];
		for(j=0;j<t[i][1]-t[i][0]+1;++j)
			b[j]=a[t[i][0]+j-1];
		for(j=0;j<t[i][2];++j){
			max=b[j];
			s=j;
			for(k=j+1;k<t[i][1]-t[i][0]+1;++k){
				if(b[k]>max){
					max=b[k];
					s=k;
				}
			}
			b[s]=b[j];
			b[j]=max;
			if(j==t[i][2]-1)
				cout<<b[j]<<endl;
		}
		delete[] b;
	}
	delete[] t;
	return 0;
} 
