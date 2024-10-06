#include <iostream>
using namespace std;
int main()
{
	int num_1;
	cout<<"enter 1st number :";
	cin>>num_1;
	int num_2;
	cout<<"enter 2nd number :";
	cin>>num_2;
	float sum = num_1 + num_2;
	float sub = num_1 - num_2;
	float product = num_1 * num_2;
	float division = num_1 / num_2;
	float reminder = num_1 % num_2;
	cout<<"the sum of "<< num_1<<" and "<< num_2<<"="<<sum<<endl; 
	cout<<"the sub of "<< num_1<<" and "<<num_2<<"="<<sub<<endl;
	cout<<"the product of "<< num_1<<" and "<<num_2<<"="<<product<<endl;
	cout<<"the division of "<< num_1<<" and "<<num_2<<"="<<division<<endl;
	cout<<"the reminder of "<< num_1<<" and "<<num_2<<"="<<reminder<<endl;
	return 0;
}