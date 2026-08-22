math = int(input("math ="))
physics = int(input("physics ="))
chemistry = int(input("chemistry ="))

average = (math + physics + chemistry)/3

if(average >= 90):
    print("A", average)
elif(average >= 80):
    print("B", average)
elif(average >=70):
    print("C", average)
elif(average >= 50):
    print("D", average)
else:
    print("need improvement", average)