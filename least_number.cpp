#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
int len=0;
while(argv[++len] !=NULL);
int i,arrtemp[len],num=0,alpha=0,special=0;
char **arr1temp[len];
for(i=0;i<len-1;i++)
arr1temp[i]=&argv[i+1];
for(i=0;i<len-1;i++)
arrtemp[i]=atoi(argv[i+1]);

for(i=0;i<len-1;i++)
{
if(**arr1temp[i]>=48 && **arr1temp[i]<=57)
num++;
else if(**arr1temp[i]>=65 && **arr1temp[i]<=90 || **arr1temp[i]>=97 && **arr1temp[i]<=122)
alpha++;
else
special++;
}
if(alpha>0)
{
cout<<"Please enter number only"<<endl;
int exit_code;
exit(exit_code);
}
else
{
for(i=0;i<len-1;i++)
{
int temp=arrtemp[0];
for(i=0;i<len-1;i++)
{
if(temp>arrtemp[i])
temp=arrtemp[i];
}
cout<<"Smallest Number is : "<<temp<<endl;
}
cout<<"\n";
}
return 0;
}
