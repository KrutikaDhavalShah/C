print("Demonstration of Set")

# characteristics of set data type(key-value pair)
# Data : Heterogeneous
# **Ordered : No
# **Indexed : No
# Mutable : Yes
# Duplicates : No

data = {11,21,51,101,21,11}             # No Duplicates as it doesnt store duplicates
data1 = {11, 90.80, True, "Hello"}      # Heterogeneous

print("First set data", data)
print("Length of data", len(data))
print("Data is Heterogeneous : ",data1)
print("Data is unordered : ",data1)
# print("Data at index 2 : ",data1[2])   #Error: object is not subscriptable
print("Data with unique elements : ", data)
print("Set is mutable")
#Insert element in set
data.add(211)
print("Data after insertion", data)
data.remove(211)                    #if key is not present then error occurs
print("Data after removal", data)

data.discard(211)                    #if key is not present then error doesnt occur
print("Data after discard", data)

