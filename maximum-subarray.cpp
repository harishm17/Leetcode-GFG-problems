// https://leetcode.com/problems/maximum-subarray
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int dp[n];
	dp[0]=a[0];
	int maxi=a[0];
	for(int i=1;i<n;i++)
	{
		dp[i]=max(a[i],dp[i-1]+a[i]);
		maxi=max(maxi,dp[i]);
	}
	cout<<maxi;
}