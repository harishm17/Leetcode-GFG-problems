// https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
// https://leetcode.com/problems/reverse-string/
#include <iostream>
using namespace std;

// iterative method
// int main() {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++)
// 		cin>>a[i];
// 	int temp=0;
// 	int l=0,r=n-1;
// 	while(l<r)
// 	{
// 		temp=a[l];
// 		a[l]=a[r];
// 		a[r]=temp;
// 		l++;
// 		r--;
// 	}
// 	for(int i=0;i<n;i++)
// 		cout<<a[i]<<" ";
// }

// recursive method

string rev(string s)
{
	if(s.size()==0 || s.size()==1)
		return s;
	else
	{
		return s[s.size()-1]+rev(s.substr(1,s.size()-2))+s[0];
	}
}

int main() {
	string s;
	cin>>s;
	cout<<rev(s);
}


