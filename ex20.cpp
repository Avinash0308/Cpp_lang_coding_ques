#include <iostream>
#include<bits/stdc++.h>
#include<utility>
using namespace std;
int main() {
	
	
	int test;
	cin>>test;
	while(test--){
        string number ;
		int match = 0;
		char b ;
		cin>>number;
		

		for(int i = 0; i <number.size() ; i++){
			b = number.at(i);
			if(b == '0' || b == '6' || b == '9'){
			match+= 6;
			}
			else if(b == '2' || b == '3' || b == '5'){
			match+= 5;
			}
			else if(b=='1'){
				match+= 2;
			}
			else if(b=='4'){
				match+=4;
			}
			else if(b=='7'){
				match+=3;
			}
			else{
				match+=7;
			}
		}
			

		if (match % 2 == 0) 
{ 
	star:
    while(match){
    cout << "1"; 
	match-=2;
}
 } 
else { 
	cout << "7";
	match-=3;
	goto star;
 }
cout << endl;
	}
	
	return 0;
}