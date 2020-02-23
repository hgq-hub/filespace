#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[500][500] = {0}, b[500][500];
	int i, j, k, r , n, m, mid, ans = 0;
	cin >> n >> m;
	for(i = 0; i < n; ++i)
		for(j = 0; j < m; ++j)
			cin >> a[i][j];
	for(i = 0; i < n; ++i)
		for(j = 0; j < m; ++j){
			b[i][j] = a[i][j];
			if(i > 0 && j > 0){
				mid = 0;
				for(k = i; k >= 0; --k){
					for(r = j; r >= 0; --r){
						mid += a[k][r];
						if(k == i)
							b[i][j] = max(b[i][j], mid);
					}
					b[i][j] = max(b[i][j], mid);
				}
				mid = 0;
				for(r = j; r >= 0; --r){
					for(k = i; k >= 0; --k){
						mid += a[k][r];
						if(r == j)
							b[i][j] = max(b[i][j], mid);
					}
					b[i][j] = max(b[i][j], mid);
				}
			}
		}
	for(i = 0; i < n; ++i)
		for(j = 0; j < m; ++j)
			ans = max(ans, b[i][j]);
	cout << ans;
	return 0;
} 
