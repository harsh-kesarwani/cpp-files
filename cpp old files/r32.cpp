#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

void bubbleSort(int arr[], int n)  
{  
    int i,j;  
    for(i=0;i<n-1;i++)      
    for(j=0;j<n-i-1;j++)  
        if(arr[j]>arr[j+1])  
            swap(arr[j],arr[j+1]);  
}  

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	bubbleSort(a,n);
	for(int i=0;i<n;i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
    return 0;
}
 
