#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
	return a<b;
}
int main(){
	int a[9]={1,4,0,2,8,4,6,9,8};
	sort(a,a+9,cmp);
	for(int i=0;i<9;i++)
		cout<<a[i]<<' ';
	return 0;
} 
