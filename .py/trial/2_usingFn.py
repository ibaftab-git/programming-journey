# #ask user for name

# name = input("what's your name ? :")

# print("hello , ", end="")

# #, end="" -> is used for print in same line
# #if i write somethin in b/w "" it'll include that one 

# print(name)

# #sep operator

# print("hello", name, sep=" ?:? ")


                # another code####

    # escape character 
print("hello \"friend\"")


    # format string #
name = input("What's your name :")

#remove whitespace from str
name = name.strip()

#capitalize users name (only first name)
name = name.capitalize()

#capitalize user name (all first capital)
name = name.title()

#we can decrease the number of lines by merging function

name = name.strip().title() #merging function
        #or
# name = input("What's your name :").strip().title()

print(f"hello, {name}")


