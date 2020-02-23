#include<iostream>
using namespace std;
int* GetTwoInts(){
	int a[2];
	cin>>a[0]>>a[1];
	return a;
}
int main(){
	int *b;
	b=GetTwoInts();
	cout<<b[0]+b[1];
	return 0;
}
