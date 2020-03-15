import re
Names=[]

def getSum(s):
    S=0
    for i in range(0,len(s)):
        S=S+abs(ord(s[i])-ord('A'))+1
    return S


def read():
    with open('file.txt','r') as f:
        
        names=f.read().split(',')
        
        with open('file1.txt','a+') as F:
            for i in range(0,len(names)):
                Names.append(names[i].split('"')[1].split('"')[0])
    Names.sort()

if __name__=="__main__":
    read()
    S=0
    for i in range(0,len(Names)):
        S=S+getSum(Names[i])*(i+1)
    print(S)

