list = [2, 1, 3]

list.append(4) # it will add in end 
print("our appended list are ", list)

list.sort() # it will sort list in ascending order
print("our sorted list are ", list)

list.sort(reverse=True)
print("our descending sorted list are ", list)

list.reverse() # it reverses the list
print("our reversed list are ", list)

list.insert(1, 99)
# list.insert( idx, el ) #insert element at index
print("our inserted element is ", list)

print("\n now we are performing operation in list1")
list1 = [2, 1, 3, 1]
list1.remove(1) # it removes the very first element if it finds
print(list1)

x = list1.pop(2) #list.pop( idx ) #removes element at idx
print("now it'll remove 2nd index elemnt", x)
