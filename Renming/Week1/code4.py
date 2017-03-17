import time
import itertools
import math
timeStart = time.clock()
with open('input.txt', 'r') as input:
    andr = [int(x) for x in input.readline().split(' ')]
    pete = [int(x) for x in input.readline().split(' ')]
    paul = [int(x) for x in input.readline().split(' ')]
maxVal =0
for permute in itertools.permutations([0,1,2]):
    curVal = math.sqrt(andr[permute[0]]**2 + pete[permute[1]]**2+paul[permute[2]]**2)
    if curVal > maxVal:
        maxVal = curVal


with open('output.txt', 'w') as output:
    output.write(str(maxVal))

    output.write('\n')

print(time.clock())