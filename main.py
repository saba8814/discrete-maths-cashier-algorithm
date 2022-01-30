denominations = {25:"quarters",10:"dimes",5:"nickels",1:"pennies"} 

change = int(input("Please input change to be converted: "))
copy_of_change = change

result = list()
for denomination in denominations.keys():
    result.append(change//denomination)
    change=change-(change//denomination)*denomination

print("To give change of {}, you need to give out: ".format(copy_of_change))

counter = 0
    
for denomination in denominations.values():
    if result[counter]==0:
        counter+=1
        continue
    else:
        print("{} ".format(str(result[counter]))+denomination)
        counter+=1

