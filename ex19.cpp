#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	for(int i = 0 ; i<9 ; i++){
		if(i == 2){
			if(s[2] == ('A' || 'E' || 'I' || 'O' || 'U' || 'Y')){
				continue;
			}
			else{
				cout<<"invalid"<<endl;
				break;
			}
		}
		else{
		if( i == (1||2||5||6)){
			continue;
		}
		else{

		}
		}
	}

}