#include<iostream>
#include<conio.h>
using namespace std;
class employe
{
  public:
  virtual void calculatepay()=0;
};
class engineer:public employe
{
int  money1;
public:
void calculatepay()
{
cin>>money1;
cout<<"employe pays :"<<money1<<endl;
}
};
class manager:public employe
{
int  money;
public:
void calculatepay()
{
cin>>money;
cout<<"manager pays :"<<money<<endl;
}
};
int main()
{
	employe*e;
	manager M;
	engineer E;
	e=&M;
	e->calculatepay();
	e=&E;
	e->calculatepay();
	return 0;
}