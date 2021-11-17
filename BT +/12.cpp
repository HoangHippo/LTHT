#include <iostream>
#include <pthread.h>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <ctime> 
#include <queue>

using namespace std;
void que(queue<int> &Q){
	while(true){
		int m = static_cast <int> (rand()) / (static_cast <int> (RAND_MAX/10000));
		Q.push(m);
		if(m%2==0){
			break;
		}
	}
}



int main()
{
	queue<int> Q;
	que(Q);
	cout<<endl;
	cout<<"Queue:";
	while(Q.empty()==false)
	{
		cout<<Q.front()<<",";
		Q.pop();
	}
}

