#include<iostream>
using namespace std;

bool equal(int *stu, int n){
	int i;
	for(i = 1; i < n; ++i)
		if(stu[0] != stu[i])
			return false;
	return true;
}

int main(){
	int i, k, n, *stu, sum = 0, ans = 0;
	cin >> n;
	stu = new int[n];
	for(i = 0; i <  n; ++i){  //发糖果 
		cin >> stu[i];
		sum += stu[i]; 
	}
	while(!equal(stu, n)){
		for(i = 0; i < n; ++i)   //补齐糖果 
			if(stu[i] % 2 != 0){
				++stu[i];
				++ans;
			}
		k = stu[0];
		for(i = 0; i < n; ++i){   //分糖果 
			if(i == n-1){
				stu[i] += k/2;
				stu[0] -= k/2;
			}	
			else{
				stu[i] += stu[i + 1]/2;
				stu[i+1] -= stu[i+1]/2;
			}
		}
	}
	cout << ans; 
	return 0;
}
