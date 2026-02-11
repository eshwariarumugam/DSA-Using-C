#Hollow diamond
rows=int(input("Enter rows: "))
for i in range(1,rows+1):
    for space in range(rows-i):
        print(" ",end=" ")
    for j in range(1,2i):
        if j==1  or j==2i-1 or i==rows:
            print("",end=" ")
        else:
            print(" ",end=" ")
    print()
for i in range(rows-1,0,-1):
    for space in range(rows-i):
        print(" ",end=" ")
    for j in range(1,2i):
        if j==1  or j==2i-1 :
        print("",end=" ")
        else:
        print(" ",end=" ")
     print()
