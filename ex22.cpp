#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int n , m ;
        char a;
        string str;
        cin>>n>>m;
        int s = 0 , w = 0;
        // vector<vector<char>> vec;
        // vector<char> ve;
        while(n--){
            cin>>str;
            for (int j = 0; j < str.size(); j++)
            {
                if(str[j] == '#'){
                    s++;
                    if( s>w){
                        w = s;
                    }
                }
                else{
                    s = 0;
                }
            }
            s = 0;
            // while(m--){
            //     cin>>a;
            //     ve.push_back(a);
            // }
            // vec.push_back(ve);
        }
        
        cout<<w<<endl;
        // for (int i = 0; i < vec.size(); i++)
        // {
        //     for (int j = 0; j < str.size(); j++)
        //     {
        //         if(vec[i][j] == '#'){
        //             s++;
        //             if( s>w){
        //                 w = s;
        //             }
        //         }
        //         else{
        //             s = 0;
        //         }
        //     }
        //     s = 0;
        // }
    }
return 0;
}