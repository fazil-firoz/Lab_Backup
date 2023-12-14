num=int(input("Enter the a number : "))
fact= 1
if num < 0:
    print ("invalid input")

elif num==0:
    print ("The factorial is 1")

else :
    for i in range (1,num+1):
        fact = fact * i
    print ("The fact of",num ,"is",fact)




