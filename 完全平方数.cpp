#include<iostream> 
#include<cmath> 
using namespace std;
int main(){
	int j,n;
	cin>>n;
	if(n<=0)
		cout<<0;
	else{
		j=sqrt(n);
		if(j*j==n)
			cout<<n;
		else
			cout<<(j+1)*(j+1);
	}
	return 0;
}
