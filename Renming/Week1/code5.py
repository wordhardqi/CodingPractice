import time
import itertools
import math
timeStart = time.clock()
keyboard = dict()
with open('input.txt', 'r') as myFile:
    width,height = [int(x) for x in myFile.readline().split(" ")]

    langs = []
    codes = []
    numOfLangs =3
    # Build The Keyboard in Dict
    for h in range(0,height):
        curLine = myFile.readline().rstrip()
        for w in range(0,width):
            keyboard.update({curLine[w]:(h+1,w+1)})

    for i in range(0,numOfLangs):
        langs.append(myFile.readline().rstrip())
        # Skip Template Start
        myFile.readline()
        mstr = ""
        # Read Lines Util %TEMPLATE-END%
        while True:
            curLine = myFile.readline().rstrip().replace(" ","")
            if curLine == "%TEMPLATE-END%":
                break
            mstr += curLine
        # Save mstr in codes
        codes.append(mstr)

def dist(aKey,bKey):
    a = keyboard[aKey]
    b = keyboard[bKey]
    return max(abs(a[0]-b[0]),abs(a[1]-b[1]))

vals = []
for i in range(0,numOfLangs):
    curCode = codes[i]
    curVal =0
    if not len(curCode) == 1 :
        for charInd in range(0,len(curCode)-1):
            curVal += dist(curCode[charInd],curCode[charInd+1])
    vals.append(curVal)

minVal = min(vals)
minInd = vals.index(minVal)








#
# for i in range(0,numOfLangs):
#     print(langs[i])
#     print(codes[i])



with open('output.txt', 'w') as output:
    output.write(langs[minInd])
    output.write('\n')
    output.write(str(minVal))

    output.write('\n')

print(time.clock())