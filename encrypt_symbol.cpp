#include<iostream>
#include<string>
using  namespace std;

int main()
{ 
string str;
char e='$';
char o='#';
int count,ASCII,i,j;
cout<<"Enter the string to encrypt"<<endl;
cin>>str;
for(i=0;i<=str.length();i++)
{
ASCII=str[i];
if(ASCII>=97)
count=ASCII-96;
else
count=ASCII-64;
for(j=0;j<count;j++)
{
if(i%2==0)
cout<<e;
else
cout<<o;
}
}
return 0;
}
