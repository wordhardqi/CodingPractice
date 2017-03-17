import math
# Fine the next prime after pList
def nextPrime(pList):
    nextVal = pList[len(pList)-1]+2
    Flag = True
    while Flag:
        for x in pList:
            if nextVal % x ==0:
                nextVal = nextVal + 2
                break
        Flag = False
    return nextVal

seedList = [2,3,5,7,11,13]
curProd = 1
for x in seedList:
    curProd = curProd * x

while curProd <= int(1e7)+1:
    nextVal = nextPrime(seedList)
    seedList.append(nextVal);
    curProd = curProd * nextVal

print  (seedList)