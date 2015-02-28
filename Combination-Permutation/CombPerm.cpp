#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bitset>
#include <stack>



using namespace std;


// Combination
void combination(string s, string comb, int count){

	for(int i=0;i<comb.length();i++){
		cout<<comb[i];
	}
	cout<<"\n";


	for(int i=count;i<s.length();i++){
		comb.push_back(s[i]);	
		combination(s, comb, i+1);
		comb.pop_back();	
	}	
}


//Permutation
void permute(string s, int start, int n){
	if(start == n){
		for(int i=0;i<n;i++){
			cout<<s[i];
		}
		cout<<"\n";
	}

	for(int i=start;i<s.length();i++){
		swap(s[start], s[i]);
		permute(s, start+1, n);
		swap(s[start], s[i]);

	}
}

int main() {

	
/*
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
*/
	string text = "rheno";
	string comb;
	
	// Test Combination
	cout<<"Combination : ";
	combination(text, comb, 0);



	// Test Permutation
	cout<<"\nPermutation : "<<endl;
	permute(text,0,2);

	return 0;
}

