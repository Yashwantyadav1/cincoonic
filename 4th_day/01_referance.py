'''a = 5
b=2
print(a)
print(b)
a = a + 2
print(a)'''
#------------------
myListOne =[1,2,3]
myListTwo = myListOne
myListTwo = [1,2,3]
print(myListTwo)
print(myListOne)

myListOne[0] = 33
print(myListOne)
print(myListTwo)

#----------------------
l1 =[1,2,3]
l2=l1
print(l1)
print(l2)

l1[0] = 67
print(l1)
print(l2)