# print("Hello world, I'm learning Python")

# Single line comment
"""
Multi-line comment
"""

# Naming Conventions for Variables
"""
1. Pascal Case
 - UzairAhmad

2. Camel Case
  - uzairAhmad

3. Snake Case
 - uzair_ahmad
"""



"""
Data Types in Python

1. Numbers
 - Integer: All the numbers excluding decimal places and fraction.
 - Float: All the decimal numbers and fraction values are Float.
 - Complex: Numbers with real and imaginary parts are complex.

 2. Strings: This is used to store anything in python, literally anything
    that are available on your keyboard.
    You have to use quotes to store anything and it will be
    considered as string. You can use double Quotes (“”) or
    single quotes ('') to store both works same.

3. Boolean: Theres nothing much to say this is the data type which
    will and always give the result of True and False.
"""
# a = 8
# print(type(a))


# Unicode: is a universal character encoding standard that assigns a unique number (code point) to every character, regardless of language

# a = 65
# print(chr(a)) # chr() prints the character of a unicode

# b = "a"
# print(ord(b)) # ord() prints the unicode of a character


# Indexing:
#  - Positive Indexing: Accesses elements from the start of a sequence, beginning at index 0.
#  - Negative Indexing: Accesses elements from the end of a sequence, with -1 being the last item.
# name = "Uzair"
# print(name[2], name[-3])



# String Slicing
# name = "Uzair Ahmad"
# name[start : end : step]
"""
Default values:
 - Start: 0
 - End: last index
 - Step: 1
"""
# print(name[0:5:1])
# print(name[-5::])


# Type convertion
a = "10"
a = int(a)
print(type(a))

# We can't convert character into int. i.e: abc can't be converted to int. only numbers can be converted to int
"""
Types: int(), float(), string(), bool()

"""



