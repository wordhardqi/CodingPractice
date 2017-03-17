import time
timeStart = time.clock()
with open('input.txt', 'r') as input:
    numberOfElems = int(input.readline())
    vals = [int(x) for x in input.readline().split(' ')]
    
vals.sort()
curSum =0
res = 0
for i in range(0,numberOfElems):
    curSum += vals[i]
    if curSum <=300 * 60:
        res +=1
    else:
        break 
            
    
with open('output.txt', 'w') as output:
    output.write(str(res))
    
    output.write('\n')

print(time.clock())
