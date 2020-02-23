#include<iostream>
using namespace std;

void dfs(int m,int *t,int n,int &result){
	int i,j,k,e=0;
	for(j=1;j<=9;j++){
		for(k=0;k<9;k++){
			if(t[k]!=j)
				e++;
			else
				break;
		}
		if(e==n){
			t[n]=j;
		}
		if(n==8){
			if(m*(t[3]*100+t[4]*10+t[5])==(t[0]*100+t[1]*10+t[2])*(t[3]*100+t[4]*10+t[5])+t[6]*100+t[7]*10+t[8])
				result++;
			return;
		}
		dfs(m,t,n+1,result);
	}
}

int main(){
	int i,j,result,m,n;
	int t[9]={0};
	result=0;
	cin>>m;
	dfs(m,t,0,result);
	cout<<result;
	return 0;
}
