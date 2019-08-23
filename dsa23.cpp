//============================================================================
// Name        : dsa23.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class test
{int n,mks[100],max=0;

public:


	void getdata()
	{
			cout<<"enter number of students:";
			cin>>n;
			cout<<"Enter marks of all students";

			for(int i=0;i<n;i++)
			{
			cin>>mks[i];
			}
	}
	void maxmks()
	{

		for(int i=0;i<n;i++)
		{
			if(mks[i]>max)
				max=mks[i];
		}
		cout<<"Maximum marks:"<<max<<endl;
	}
	void minmks()
	{
		int  min=mks[1];
		for(int i=0;i<n;i++)
		{	if(mks[i]>=0)
			{
			if(mks[i]<min)
			{	min=mks[i];}
			}
		}
		cout<<"Minimum marks:"<<min<<endl;
	}
	void avgmks()
	{
		int abs=0;
		int avg,sum=0;

		{	for(int i=0;i<n;i++)
			{if(mks[i]<0)
			{
				abs++;
			}
			else
			sum=sum+mks[i];
			}}
		avg=sum/n;
		cout<<"Average marks of all students:"<<avg<<endl;
	}
	void mostmks()
	{
		int most=1,arr[1];
		for(int i=0;i<n;i++)
			{
				if(mks[i]==mks[i+1])
				{
					most++;
					arr[0]=mks[i];
				}
			}
				if(most>1)
				{
					cout<<"marks obtained by most of students:"<<arr[0]<<endl;

				}
	}
	void absent()
	{
		int abs=0;
		for(int i=0;i<n;i++)
		{		if(mks[i]<0)
					{
						abs++;
					}

		}cout<<"Number of absent students:"<<abs<<endl;
	}
};
int main() {
	test t1;


	t1.getdata();
	t1.maxmks();
	t1.minmks();
	t1.avgmks();
	t1.mostmks();
	t1.absent();

	return 0;
}
