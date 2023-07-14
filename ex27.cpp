#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test , a ,b;
	cin>>test;
	for(int i = 0 ; i<test ; i++){
	    cin>>a>>b;
	    if(a%10 != 0){
	        a = (a/10) ;
	    }
	    if(b%10 != 0){
	        b = (b/10) ;
	    }
	    if(a%10 == 0){
	        a = (a/10)-1;
	    }
	    if(b%10 == 0){
	        b = (b/10)-1;
	    }
	    if(a>b){
	    cout<<(a-b)<<endl;
	    }
	    else{
	        cout<<(b-a)<<endl;
	    }    
	}
	return 0;
}
