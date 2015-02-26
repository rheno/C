#include <iostream>
#include <string>

using namespace std;



bool isVowe(char c){

	if(c=='a' || c=='i' || c=='u' || c=='e' || c=='o'){
		return true;
	}
	return false;
}

string removeVow(string s, string s1, int i){
	
	if(i>s.length()-1){
		return s1;
	}else
	if(!isVowe(s[i])){
		s1.push_back(s[i]);
	}
	
	return removeVow(s,s1, i+1);
	
}


int main() {

	
/*
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
*/
	string str1;
	string str2;

	cin>>str1;
	cout<<removeVow(str1,str2, 0)<<endl;
	
	return 0;
}

