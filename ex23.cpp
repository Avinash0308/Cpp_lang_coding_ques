#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void solveit(vector<int> a)
{
       int x = -199988;
        int sum[a.size()];
            for (int i = 0; i < a.size(); i++)
        {
            sum[i] = 0;
            int b = 1;
            for (int j = i; j < a.size() && b<a.size(); j+=b)
            {
                for (int k = 0; k < b  && j< a.size(); k++)
                {
                    sum[i] += a[k+j];
                }
              
                b++;
            }
            if(sum[i] > x){
                x= sum[i];
            }
        }
        cout<<x<<endl;
        
}
int main() {
	int n;
	cin>>n;
	vector<int> a;
	int x;
	for(int i = 0 ; i<n ; i++){
		cin>>x;
		a.push_back(x);
	}
    solveit(a);
}