current_year=int(input("Enter currebt year :"))
year=int(input("Enter future year :"))


for i in range(current_year,year):
    if(i%4==0 and i%100!=0 or i%400==0):
        print(i)
        
        

    
        

