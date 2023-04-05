// https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
#include <iostream>
using namespace std;


// Linear approach
// int main() {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++)
// 		cin>>a[i];
// 	int maxi=a[0];
// 	int mini=a[0];
// 	int cnt=0;
// 	for(int i=1;i<n;i++)
// 	{
// 		cnt++;
// 		if(a[i]<mini)
// 		{
// 			mini=a[i];
// 		}
// 		else if(a[i]>maxi)
// 		{
// 			cnt++;
// 			maxi=a[i];
// 		}
// 		else
// 			cnt++;
// 	}
// 	cout<<"maxi: "<<maxi<<" mini: "<<mini<<" cnt: "<<cnt;
// }

// with comparison in pairs
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int maxi=a[0];
	int mini=a[0];
	int i=1;
	int cnt=0;
	if(n%2==0)
	{
		if(a[0]>a[1])
		{
			maxi=a[0];
			mini=a[1];
		}
		else
		{
			mini=a[0];
			maxi=a[1];
		}
		i=2;
		cnt+=1;
	}
	while(i<n)
	{
		if(a[i]<a[i+1])
		{
			if(maxi<a[i+1])
				maxi=a[i+1];
			if(mini>a[i])
				mini=a[i];
		}
		else
		{
			if(maxi<a[i])
				maxi=a[i];
			if(mini>a[i+1])
				mini=a[i+1];
		}
		cnt+=3;
		i+=2;
	}
	cout<<"maxi: "<<maxi<<" mini: "<<mini<<" cnt: "<<cnt;
}