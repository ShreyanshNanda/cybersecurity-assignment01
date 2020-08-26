print("New list with unique elements of the first list")
list=[0,1,2,3,2,1,0]
unique=[]
n=len(list)

for i in list:
    if(i not in unique):
        unique.append(i)
        
print(unique)
