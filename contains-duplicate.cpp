// https://leetcode.com/problems/contains-duplicate/
#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	unordered_set<int> s;
    for(int i=0;i<a.size();i++)
        s.insert(a[i]);
    if(a.size()==s.size())
        cout<<"distinct";
    else
        cout<<"not distinct";
}