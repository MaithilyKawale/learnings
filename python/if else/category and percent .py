#write a program to accept percentage and display the category according to the following criteria
#<40     failed
#>=40 and <55          fair
#>=65  and  <65       good
#>=65   excellent

per=int(input("Enter percentage:"))
print("your percentage is",per)

if per<40:
    print("failed")
elif per>=40 and per<55:
    print("fair")
elif per>=65 and per<65:
    print("good")
elif per>=65:
    print("excellent")