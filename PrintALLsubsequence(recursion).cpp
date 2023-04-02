#include <bits/stdc++.h>
using namespace std;


#define forn(i,n) for(int i=0;i<n;i++)
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ln "\n"
#define pb push_back
#define fi first
#define se second
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void f(int ind, vector<int> &arr,vector<int> &ds, vector<vector<int>> &ans){

	if(ind==arr.size()){
		ans.push_back(ds);
		return;
	}

	// pick the element 
	ds.push_back(arr[ind]);
	f(ind+1,arr,ds,ans);

	//backtracking step 
	ds.pop_back();
	// non pick 
	f(ind+1,arr,ds,ans);
}

vector<vector<int>> genratess(vector<int> &arr){
	vector<int> ds;
	vector<vector<int>> ans; 

	f(0,arr,ds,ans);

	return ans;
}


int main(){
	fastio();
	
	// genrate all the subsequneces of an array using recursion 
	vector<int> arr = {1,2,3};

	vector<vector<int>> ans; 
	ans = genratess(arr);

	for(auto v:ans){
		for(auto ele:v){
			cout<<ele<<" ";
		}
		cout<<endl;
	}



}