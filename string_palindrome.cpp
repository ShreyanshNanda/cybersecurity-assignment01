#include<iostream>
#include<string.h>
using namespace std;

int main ()
{
char c[20];
cout<<"Enter the String : "<<endl;
cin>>c;
int i,length,count=0;
length=strlen(c);
for(i=0;i<length/2;i++)
{
if(c[i]==c[length-i-1])
{
count++;
}
} 
if(count==length/2)
{
cout<<"String is palindrome"<<endl;
}
else
{
cout<<"String is not a palindrome"<<endl;
}
return 0;
}
