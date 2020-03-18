num=3
den=2

c=0

def digCount(n):
    c=0
    while n!=0:
        c=c+1
        n=n//10
    return c

for i in range(0,1001):
    #print("Numberator: ",num , "Denominator: ",den)
    if(len(list(str(num)))>len(list(str(den)))):
        c=c+1
    temDen=num+den
    temNum=den+temDen
    num=temNum
    den=temDen
    
print(c)
    
