// https://www.geeksforgeeks.org/chocolate-distribution-problem/
#include <iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	int mini=a[n-1]-a[0];
	for(int i=0;i<n-m+1;i++)
	{
		mini=min(mini,a[i+m-1]-a[i]);
		// cout<<a[i+m-1]-a[i]<<" ";
	}
	cout<<mini;
}