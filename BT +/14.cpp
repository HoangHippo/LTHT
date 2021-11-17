#include<iostream>
#include<conio.h>
#include <ctime>
#include <cstdlib>
#include<windows.h>
#include <math.h>

using namespace std;

void getDate(){
	time_t now = time(0);
	tm *ltm = localtime(&now);	
	cout<<"Date:"<<ltm->tm_mday<<"/"<<1+ltm->tm_mon<<"/"<<1900+ltm->tm_year<<endl;
	
}

int main()
{
	getDate();
}

