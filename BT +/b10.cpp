#include <iostream>
#include <pthread.h>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <ctime> 
using namespace std;
int nn(int a[],int n){
	while(true){
		srand(time(NULL));
		int m = rand() % 10000 + 1;
		for(int i = 0 ;i<n ;i++){
			if(a[0] == 0)
			{
				a[0]=a[1];
				n--;
			}
			a[n]=m;
		}
		n=n+1;
		int tg;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++)
			{
				if(a[i] > a[j]){
	                tg = a[i];
	                a[i] = a[j];
	                a[j] = tg;        
	            }
			}	
		}
		for(int i=0;i<n;i++){
			if(a[i] >2021)
			{
				return a[i];
			}
		}
	}
}
int ln(int a[],int n){
		srand(time(NULL));
		int m = rand() % 10000 + 1;
		int count = 0;
		for(int i = 0 ;i<n ;i++){
			if(a[0] == 0)
			{
				a[0]=a[1];
				n--;
			}
			a[n]=m;
		}
		n=n+1;
		int tg;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++)
			{
				if(a[i] < a[j]){
	                tg = a[i];
	                a[i] = a[j];
	                a[j] = tg;        
	            }
			}	
		}
		for(int i=0;i<n;i++){
			if(a[i] <2021)
			{
				return a[i];
			}
		}
	}



int main()
{
	int a[1000];
	cout<<nn(a,1000)<<endl;
	cout<<ln(a,1000);
}

