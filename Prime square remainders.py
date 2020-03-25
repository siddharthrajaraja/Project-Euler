MAX=pow(10,6)+1
primes=list(map(int,"1"*MAX))
primeList=[]

def seive():
    primes[0]=0
    primes[1]=0
    i=2
    while i<MAX:
        if(primes[i]==1):
            primeList.append(i)
            j=2
            while i*j<MAX:
                primes[i*j]=0
                j=j+1

        i=i+1
    
if __name__=="__main__":
    seive()
    print(primeList)

    for i in range(0,len(primeList)):
        if ((pow(primeList[i]-1,i+1)+pow(primeList[i]+1,i+1))%pow(primeList[i],2)<pow(10,10)+1):
            print("INDEX : ",i+1,"Prime is :",primeList[i])
            pass
        else:
            break
    print(i+1)
