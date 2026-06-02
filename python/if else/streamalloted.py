#accept marks of english,maths and science,social studies subject and display the stream alloted
#all subject more than 80 marks_  Science Stream
#english>80 and math,science above 50_    Commerce Stream
#english > 80 and social studies > 80 _ humanities

eng=int(input("enter marks of english:"))
maths=int(input("enter marks of maths:"))
sci=int(input("enter marks of sci:"))
ssc=int(input("enter marks of ssc:"))

if eng>=80 and maths>=80 and sci>=80 and ssc>=80:
    print("science stream alloted")
elif eng>80 and maths>=50 and sci>=50:
    print("Commerce stream alloted")
elif eng>=80 and ssc>=80:
    print("Humanites alloted")
else:
    print("nothing")
