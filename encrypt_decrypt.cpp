#include<iostream>
using namespace std;

int main()
{ 
char  e[100],e1,e2,e3[100];
int i,key;
cout<<"Enter the string to be encrypted"<<endl;
cin>>e;
cout<<"Enter the key"<<endl;
cin>>key;
for(i=0;e[i]!='\0';i++){
e1=e[i];
if(e1>=65 && e1<=90)
{
e1=e1+key;
if(e1>90)
{
e1=e1-90+65-1;
}
e[i]=e1;
}
else if(e1>=97 && e1<=122)
{
e1=e1+key;
if(e1>122)
{
e1=e1-122+97-1;
}
e[i]=e1;
}
}
cout<<"Encrypted String is : "<<e<<endl;
cout<<"Enter the string to be decrypted"<<endl;
cin>>e3;
for(i=0;e[i]!='\0';i++)
{
e2=e3[i];
if(e2>=65 && e2<=90)
{
e2=e2-key;
if(e2>90)
{
e2=e2-90+65-1;
}
e3[i]=e2;
}
else if(e2>=97 && e2<=122)
{
e2=e2-key;
if(e2>122)
{
e2=e2-122+97-1;
}
e3[i]=e2;
}
}
cout<<"Decrypted String is : "<<e3<<endl;
return 0;
}
