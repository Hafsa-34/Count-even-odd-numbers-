#include<iostream>
using namespace std;
int main()
{
	int arr[20];
	int num , count1=0 , count2=0 , count3=0;
	cout<<"Enter 20 numbers: ";
	for(int i=0; i<20; i++)
	{
		cin>>arr[i];
		
		if(arr[i]==0)
        {
		    count1++;
		}
        else if(arr[i]%2==0 && arr[i]!=0)
		{
     	    count2++;
		}
		else 
		{
			count3++;
		}
    }
    cout<<"Even numbers are: "<<count2<<endl;
	cout<<"Odd numbers are: "<<count3<<endl;
	cout<<"Zero numbers are: "<<count1<<endl;
}
