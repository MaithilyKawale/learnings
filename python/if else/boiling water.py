#accept the temperature in degree celsius of water amd check whether it is boiling or not

temp=int(input("Enter the temperature:"))
print("temperature is",temp)

if temp>=100:
    print("water is boiling")
else:
    print("water is not boiling")