import math
with open('input.txt', 'r') as myFile:
    N = int(myFile.readline())

seedList = [2,3,5,7,11,13,17,19,23]
maxNum = 0
maxVal = []
upperBound = [ int(math.log(N,x))+1 for x in  seedList]
curVal = 0
print upperBound
for p0 in range(0,upperBound[0]):
    print p0
    for p1 in range(0,min(p0,upperBound[1])):
        for p2 in range(0, min(p1, upperBound[2])):
            for p3 in range(0, min(p2, upperBound[3])):
                for p4 in range(0, min(p3, upperBound[4])):
                    for p5 in range(0, min(p4, upperBound[5])):
                        for p6 in range(0, min(p5, upperBound[6])):
                            for p7 in range(0, min(p6, upperBound[7])):
                                for p8 in range(0, min(p7, upperBound[8])):
                                    curVal = 2**p0 * 3**p1 * 5 **p2 * 7**p3 * 11**p4 * 13**p5 *17**p6* 19**p7 * 23**p8
                                    print curVal
                                    if curVal <= N:
                                        curNum = (1+p1)*(1+p2)*(1+p3)*(1+p4)*(1+p5)*(1+p6)*(1+p7)*(1+p8)*(1+p0)
                                        if curNum > maxNum:
                                            maxVal = []
                                            maxVal.append(curVal)
                                        elif curNum == maxNum:
                                            maxVal.append(curVal)

# with open('output.txt', 'w') as output:
#     output.write(str(N+1-min(maxVal)))
#     output.write('\n')

