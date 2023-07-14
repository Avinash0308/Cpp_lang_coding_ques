#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<string,int> m;
    int a , b , d;
    string c;
    cin>>a ; 
        for (int i = 0; i<a; i++) {
                    cin>>b;
                        if (b == 1) {
                            cin>>c>>d;
                            
                            m[c] +=  d;
                        }
                        
                        else if ( b == 2) {
                            cin>>c;
                            // m.erase(m[c]);
                            map<string , int>:: iterator iter = m.find(c);
                            if (iter == m.end())
                            {
                                
                            }
                            else{
                                m.erase(c);
                            }
                            
                        }
                        
                        else {
                        cin>>c;
                        cout<<m[c]<<endl;
                        }
                        
        }
    return 0;
}