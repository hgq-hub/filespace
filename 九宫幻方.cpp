#include<iostream>
using namespace std;
int val = 0;
int ans[9] = {0};
/*test
input:0 7 2  print:6 7 2
      0 5 0        1 5 9
      0 3 0        8 3 4
*/
int dfs(int *a, int *b, int *c, int n){
	if(n == 10){
		int m;
		m = a[ 1] + a[2] + a[3];
		if(m == a[1] + a[4] + a[7] && m == a[2] + a[5] + a[8] && m == a[3] + a[6] + a[9]
		&& m == a[4] + a[5] + a[6] && m == a[7] + a[8] + a[9] && m == a[1] + a[5] + a[9]
		&& m == a[3] + a[5] + a[7] ){
			++val;
			if(val == 1)
				for(int j = 1; j < 10; ++j)
					ans[j-1] = a[j];		
		}
		return 0;
	}
	int i;
	if(b[n] == 0)    //表示a[n]无值 
	 	for(i = 1; i < 10; ++i){
			if(c[i] == 0){    //表示值i未被使用 
				a[n] = i;
				c[i] = 1;
				dfs(a, b, c, n+1);
				c[i] = 0;
			}
		}
	else
		dfs(a, b, c, n+1);
	return 0;
}

int main(){
	int i;
	int a[10], b[10] = {0}, c[10] = {0};    //b标记a[i]是否有值，c[i]标记已使用值 
	for(i = 1; i < 10; ++i){
		cin >> a[i];
		if(a[i] != 0)
			b[i] = 1;
			c[a[i]] = 1;
	}
	dfs(a, b, c, 1);
	if(val == 1)
		cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << endl
		     << ans[3] << ' ' << ans[4] << ' ' << ans[5] << endl
		     << ans[6] << ' ' << ans[7] << ' ' << ans[8];
	else
		cout << "Too Many" << "有" << val << "个解";
	return 0;
}
