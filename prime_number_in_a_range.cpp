#include<iostream>
using namespace std;

int main()
{
int a,b,i,j,count;
cout<<"Enter the range(whole numbers only) "<<endl;
cout<<"From : "<<endl;
cin>>a;
cout<<"to"<<endl;
cin>>b;
cout<<"Prime Numbers are : "<<endl;
for(i=a+1;i<b;i++)
{
count=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0){
count=1;
break;
}
}
if(count==0)
cout<<i<<endl;
}
return 0;
}

