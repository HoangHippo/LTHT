#include<iostream>
using namespace std;
void nhapMang(int n,int a[])
{
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
		for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
void sxtc(int n,int a[]){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}			
	}
	cout<<"3 gia tri dau tu thap den cao:"<<a[0]<<","<<a[1]<<","<<a[2]<<endl;	
}
void sxct(int n,int a[]){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				swap(a[i],a[j]);
			}
		}			
	}
	cout<<"3 gia tri dau tu thap den cao:"<<a[0]<<","<<a[1]<<","<<a[2];	
}
int main()
{
	int n;
	cin>>n;
	int a[100];
	nhapMang(n,a);
	sxtc(n,a);
	sxct(n,a);
}

