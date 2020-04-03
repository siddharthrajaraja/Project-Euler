# 0 : True 1: False

MAX =pow(10,6)
primes=list(map(int,"0"*(MAX+1)))
primes[0]=1
primes[1]=1

dic={}

def sieve():
    i=2
    while i<=MAX:
        if primes[i]==0:
            j=2
            while i*j<=MAX:
                primes[i*j]=1
                try:
                    if dic[i*j]!=[]:
                        dic[i*j].append(i)
                except:
                    dic[i*j]=[i]
                j=j+1
        i=i+1

def getExponent(n,base):
    c=0
    while n!=1:
        if(n%base==0):

            c=c+1
            n=n//base
        else:
            break
    return [n,c]


def phi(n):
    if n==1:
        return 0
    if(primes[n])==0:
        return n-1
    arr=dic[n]
    ans=1
    cn=n
    for i in range(0,len(arr)):
        base=arr[i]
        L=getExponent(cn,base)
        cn=L[0]
        exp=L[1]
        ans=ans*(pow(base,exp)-pow(base,exp-1))
    return ans


if __name__=="__main__":
    sieve()
    ans=1
    element=1
    for i in range(2,MAX+1):
        print("phi For :",i," is : ",phi(i))
        if ans<i/phi(i):
            ans=i/phi(i)
            element=i
    print(ans,element)

    

