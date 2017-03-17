import time
timeStart = time.clock()
with open('input.txt', 'r') as input:
    numOfDays = int(input.readline())
    practice = [int(x) for x in input.readline().split(" ")]
    theory = [int(x) for x in input.readline().split(" ")]
s = 0
allTheory = 0
practicegap = 3000
theorygap = 3000
for i in range(0,numOfDays):
    if practice[i] >= theory[i] :
        s = practice[i] + s
        thisgap = practice[i] - theory[i]
        if practicegap > thisgap :
            practicegap = thisgap
    elif(practice[i] < theory[i]):
        s = theory[i] + s
        allTheory = allTheory + 1
        thisgap = theory[i] - practice[i]
        if theorygap > thisgap:
            theorygap = thisgap
if allTheory == numOfDays:
    s = s - theorygap
if allTheory == 0 :
    s = s -practicegap



with open('output.txt', 'w') as output:
    output.write(str(s))
    output.write('\n')

print(time.clock())