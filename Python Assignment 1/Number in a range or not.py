print("Number in a range or not ")
low=int(input("Enter the starting range number : "))
high=int(input("Enter the ending range number : "))
n=int(input("Enter the number to check ,it is present or not : "))
c=0
for i in range(low,high+1):
    if(i==n):
         c=c+1
if(c>0):
    print("Yes")
else:
    print("No")
