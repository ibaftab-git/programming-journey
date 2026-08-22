a = int(input("a:"))
b = int(input("b:"))
c = int(input("c:"))

if(a > b):
    if(a > c):
        print(f"{a} is greatest")
    else:
        print(f"{c} is greatest")

elif(b > c):
    if(b > a):
        print(f"{b} is greatest")
    else:
        print(f"{a} is greatest")

elif(c > a):
    if(c > b):
        print(f"{c} is greatest")
    else:
        print(f"{b} is greatest")    
