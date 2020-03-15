arr=[]
for i in range(2,101):
    for j in range(2,101):
        arr.append(pow(i,j))
print(len(list(set(arr))))
