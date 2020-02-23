#include <iostream>
using namespace std;
int main(){
	int i,j,n,temp1,temp2;
	int a[34]={1,0};
	cin>>n;
	for(i=0;i<n;++i){
		temp2=1;
		for(j=0;j<i;j++){
			if(j==0){
				cout<<'1';
				a[j]=1;
			}
			else if(j==i-1){
				cout<<'1';
				a[j]=1;
			}
			else{
				temp1=temp2;
				temp2=a[j];
				a[j]=temp1+temp2;
				cout<<a[j];
			if(j!=i-1)
				cout<<" ";
			}
		cout<<endl;
		}
	}
	//getchar(); 
	return 0;
}

