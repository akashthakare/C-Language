#include<iostream>
#include<bits/stdc++.h> 

using namespace std;

/*int main()
{
	
	static int i=5;
	
	if(--i)
	{
	main();
	cout<<++i<<"";//1234
	//cout<<i--<<"";//0-1-2-3
	}
	return -1;
}*/





/*int main()
{
	int k=5;
	//for(int i=0;;);//compile and termnate no output
	for(;;)//compile and infinite print 5
	for(;;);//compile and terminate ;
	{
		cout<<k;
	}
	return 0;
}*/




/*int main(int argc, char *argv[]) OR
int main(int argc, char** argv) 
{ 
    cout << "You have entered " << argc 
         << " arguments:" << "\n"; 
  
    for (int i = 0; i < argc; ++i) 
        cout << argv[i] << "\n"; 
  
    return 0; 
} */




/*#include <stdlib.h>//Need for status 0 or 1
int main()
{
    printf("EXIT_SUCCESS = %d\n", EXIT_SUCCESS); //prints 0
    printf("EXIT_FALIURE = %d\n", EXIT_FAILURE); //prints 1    
    return 0;
    /*Return 0 means the program has executed successfully
	 and return 1 means the program terminated with an error.
	 This is returned to the parent process.*/




/*class ClassA
       {
              public:
              int a;
       };

       class ClassB : public virtual ClassA
       {
              public:
              int b;
       };
       class ClassC : public  virtual ClassA
       {
              public:
              int c;
       };

       class ClassD : public ClassB, public ClassC
       {
              public:
              
       };
int main()
{
	ClassD d;
	cout<<sizeof(d)<<endl;;;;
	
		ClassB b;
	cout<<sizeof(b)<<endl;;;;
	
	

	
	
	return 0;
}*/


/*int* fun(int value)
{
	int a=value;
	a++;
	return a;//&a OR reference of a
}
int main()
{
	int a=10;
	int *val=fun(a);
	cout<<*val;
	return 0;
}*/





/*class abc { 

   public: 
      int i; 

      abc(int i) { 
         i= i;//compile but print garbage value
      }
};

main() { 
   abc m(5); 
   
   cout<<m.i;
}*/



/*union  //name is optional in this condition
{
	int x;
	char ch;
} var;

main() 
{	var.x = 65;
   cout<<var.ch;//print A
}*/








/*struct  
{
	int x;
	char ch;
} var;
int main() 
{
	var.x = 65;
   cout<<var.x;//no output
   return 0;
}*/




/*
class abc { 
   public: 
      static int x; 
      int i; 

      abc() {
         i = ++x;
      }
   };
int abc::x;

main() { 
   abc m, n, p;
   
   cout<<m.x<<" "<<m.i<<endl;//print 3 1
}
*/



/*int main()
{
	
	
	int a[]={11,22,33};
	int *const p=&a[2];
	*p=115,22,33;
	cout<<2[a];//print115
	return 0;
}*/


/*int main()
{
	
	int i=10;
	
	int *p=&i;
	*p=115,22,33;
	cout<<*p;//print115
	return 0;
}*/


/*
class Demo
{
	
	public:
		void print(int number)
		{
			cout<<"int: "<<number<<endl;
		}
		
		void print(int& number)
		{
			cout<<"int: "<<number<<endl;
		}
	
};
int main()
{
	Demo d1;
	d1.print(5);
	int number=10;
	
	

	return 0;
}*/


/*class Demo
{
	
	public:
		void print(bool number)
		{
			cout<<"int: "<<number<<endl;
		}
		
		void print(char number)
		{
			cout<<"int: "<<number<<endl;
		}
	
};


int main()
{
	Demo d1;
	d1.print(true);
	d1.print('A');
	d1.print(65);//error
	return 0;
}
*/


/*class Demo
{
	
	public:
		
		
		void print(bool number)
		{
			cout<<"int: "<<number<<endl;
		}
		
		void print(char number)
		{
			cout<<"int: "<<number<<endl;
		}
	
};


int main()
{
	Demo d1;
	d1.print(true);
	d1.print(65);

	
	
	return 0;
}*/


/*class Demo
{
	
	public:
		void print(int num1=0)
		{
			cout<<"int1: "<<num1<<endl;
		}
		void print(int num1,int num2=0)
		{
			cout<<"int2: "<<num1<<endl;
			cout<<"int3: "<<num2<<endl;
		}
		void print(int num1,int num2,int num3=0)
		{
			cout<<"int4: "<<num1<<endl;
			cout<<"int5: "<<num2<<endl;
			cout<<"int6: "<<num3<<endl;
		}
	
	
};
int main()
{
	Demo d1;
	d1.print();
	d1.print(11,30,55);
	return 0;
}
*/


