#include <iostream>
#include <pthread.h>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <ctime> 
#include <stack>
using namespace std;
void que(stack<int> &S){
	while(true){
		int m = static_cast <int> (rand()) / (static_cast <int> (RAND_MAX/10000));
		S.push(m);
		if(m%2==0){
			break;
		}
	}
}

int main()
{
	stack<int> S;
	que(S);
	cout<<endl;
	cout<<"Stack:";
	while(S.empty()==false)
	{
		cout<<S.top()<<",";
		S.pop();
	}
}

