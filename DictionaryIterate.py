Batches = {"PPA" : 18000, "LB" : 16700, "Python" : 16500 , "Angular" : 15000}

print("Data of Dictionary : ", Batches)
print("Data traversal using for loop")
for x in Batches:
    print(x)

print("Data traversal using for loop")
for x in Batches:
    print(x, Batches[x])              #this is fast then Batches.get(x)

print("Data traversal using for loop")
for x in Batches:
    print(x, Batches.get(x))

keyBatches=Batches.keys()
print(type(keyBatches))
print(keyBatches)

valueBatches=Batches.values()
print(type(valueBatches))
print(valueBatches)

print()



