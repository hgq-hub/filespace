#include <iostream>
using namespace std;

int result(int **t,int n){
	int i,j,k,su;
	su=0;
	if(n==2)
		return t[0][0]*t[1][1]-t[0][1]*t[1][0];
	else{
		int **a=new int*[n-1];
		for(i=0;i<n-1;i++)
			a[i]=new int[n-1];
		for(i=0;i<n;i++){
			for(j=0;j<n-1;j++)
				for(k=0;k<n-1;k++){ 
					if(k<i)
						a[j][k]=t[j+1][k];
					else
						a[j][k]=t[j+1][k+1];
				}
			if(i%2==0)
				su=su+t[0][i]*result(a,n-1);
			else
				su=su-t[0][i]*result(a,n-1);
		}
		delete[] a;
	}
	return su;
}

int main(){
	int n,i,j,su;
	cin>>n;
	if(n==1){
		cin>>su;
		cout<<su;
		return 0;
	}
	int **t=new int*[n];
	for(i=0;i<n;i++){
		t[i]=new int[n];
		for(j=0;j<n;j++)
			cin>>t[i][j];
	}
	cout<<result(t,n);
	return 0;
}


