#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int i,j,n,m=0,a[101][101]={0},dp[101][101]={0};
	cin>>n>>a[1][1];
	dp[1][1]=a[1][1];
	for(i=2;i<=n;i++)
		for(j=1;j<=i;j++){
			cin>>a[i][j];
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+a[i][j];
			if(i==n)
				m=max(m,dp[i][j]);
		}
	cout<<m;
	return 0;
}
