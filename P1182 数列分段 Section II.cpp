#include<bits/stdc++.h>
using namespace std;
int n,m;const int N=10005;
int a[N]={0};

bool check(int mid){
	int sum=0,num=0;
	for(int i=0;i<n;++i){
		if(sum>=mid){
			num++;sum=0;
		}
		sum+=a[i];
	}
	if(num>=m) return true;
	return false;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	int mn=1e9,mx=0;
	
	for(int i=0;i<n;++i){
		cin>>a[i];
		mn=min(mn,a[i]);mx=max(mx,a[i]);
	}
	
	int l=mn,r=mx+1,mid;
	while(l<r){
		mid=l+(r-l)/2;
		if(check(mid))
	}
	return 0;
}
