 #include<bits/stdc++.h>
using namespace std;


 

int main() {

int i,n,k; cin >> n >> k;

long long int arr[n];

long long int sum = 0;

for(i = 0 ; i < n ; i++)

{

    cin >> arr[i];

}

for(i = 0 ; i < n ; i++)

{

if(arr[i] < 0)

continue;

int j = i + 1;

while(j <= i + k && j < n && arr[j] < 0 && arr[i] != 0)

{

if( abs(arr[j]) <= arr[i] )

{

arr[i] += arr[j];

arr[j] = 0;

}

else

{

arr[j] += arr[i];

arr[i] = 0;

}

j++;

}

if(j == n)

break;

}

for(i = 0 ; i < n ; i++)

{

sum += (long long int)abs(arr[i]);

}

cout<<sum;

}