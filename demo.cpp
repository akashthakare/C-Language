#include <iostream>
using namespace std;
 
/*int main() {
   char a=65;
   
   char b='A';
   
   int i=65;
   
  cout<<a<<endl;//A
  cout<<b<<endl;//A
  cout<<char(i)<<endl;//A
  
  cout<<a+7<<endl;//72
  cout<<b+7<<endl;
  cout<<char(65+7)<<endl;//H
  
  cout<<char(a+7)<<endl;//H
  cout<<char(b+7)<<endl;
   return 0;
   
}*/




/*#include <stdio.h>
 
int main()
{
  int row, c, n, s;
 
  printf("Enter the number of rows in pyramid of stars you wish to see\n");
  scanf("%d", &n);
 
  s = n;
 
  for (row = 1; row <= n; row++) 
  {
    for (c = 1; c < s; c++)  
      printf(" ");
 	  s--;
 	for (c = 1; c <= 2*row - 1; c++) 
 	{
      printf("*");
  	}
 
    printf("\n");
  }
 
  return 0;
}*/

/*int main()
{
	int a[20];
	int n;
	cout<<"Enter"<<endl;
	cin>>n;
	cout<<"Enter element"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
		cout<<"After"<<i+1<<"Iteration"<<endl;
		for(int i=0;i<n;i++)
		{
		cout<<a[i];
		}
		
		cout<<endl;
	}
	
	
	
	return 0;
}
*/
/*int main()
{
	int a[20];
	int n;
	cout<<"Enter"<<endl;
	cin>>n;
	cout<<"Enter element"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
			
		}
		cout<<"After "<<i+1<<" Iteration"<<endl;
		for(int i=0;i<n;i++)
		{
		cout<<a[i];
		}
		
		cout<<endl;
	}
	return 0;
}
*/
int main()
{
	int a[20];
	int n;
	cout<<"Enter"<<endl;
	cin>>n;
	cout<<"Enter element"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=i;j>i;j--)
		{
			if(a[j-1]>a[j])
			{
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
			
		}
		cout<<"After "<<i+1<<" Iteration"<<endl;
		for(int i=0;i<n;i++)
		{
		cout<<a[i];
		}
		
		cout<<endl;
	}
	return 0;
}













