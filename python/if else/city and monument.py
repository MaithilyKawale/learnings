#accept any city from the user and display monument of that city
#delhi red fort
#agra taj mahal
#jaipur jal mahal

city=input("Enter city name delhi,agra,jaipur:").upper()
print("your city name is",city)

if city=="delhi":
    print("Monument:Red Fort")
elif city=="agra":
    print("Monument:Taj Mahal")
elif city=="jaipur":
    print("Monument:Jal Mahal")
else:
    print("not known")