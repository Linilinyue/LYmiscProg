#include<stdio.h>
#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(void)
{
	const int len=30;
	char str[len];
	char strold[len]={"haha"};
	char allname[500][len];
	int count=0;
	ifstream OpenFile("namelist.csv");

	OpenFile>>str;
//	strcpy(strold,str);
	strcpy(allname[count],str);
	count+=1;
	
	while(strcmp(str,strold))
	{
		strcpy(strold,str);
		OpenFile>>str;
		strcpy(allname[count],str);
		count+=1;
	}
	
//	cout<<str<<endl;
	
	int i = 0;
	while(i<count-1)
	{
		cout<<allname[i]<<endl;
		i=i+1;
	}
//	cout<<count<<endl;
	
//	allname:0~count-2. if there are 3 students, then count==4, i:0,1,2
//	so generate random number, [0,1,2,...,count-2]

	srand((unsigned int)time(0));
	int a=0;
	int b=count-2;
	int chosenone=rand()%(b-a+1)+a;
	cout<<endl;
	cout<<allname[chosenone]<<endl;
	
	
	OpenFile.close();
	getchar();
	return 0;
}
