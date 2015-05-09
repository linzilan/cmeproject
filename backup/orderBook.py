# fixed the order book not updating
# then maybe move on to quantities

futures = open("/Users/retsoom/Documents/Spring2015/FIN580/RMProject/cmeData/build/Debug/callFullSorted.txt", "r")
file = open("/Users/retsoom/Documents/Spring2015/FIN580/RMProject/cmeData/build/Debug/callTest.csv", "w")
file.seek(0 , 0)
futures.seek(0 , 0)
lineNum = 0
askDict = {}
bidDict = {}

inFlow = 0
outFlow = 0

arr = []
for line in futures.readlines():
    x = []
    x = line.split(', ')
    trade = "T\n"
    ask = "A\n"
    bid = "B\n"
 
 #sequence of data is time, delivery, quantity, strike, price, bid/ask/trade
    if (x[5]==trade):
        file.write(x[0])
        file.write(', ')
        file.write(x[1])
        file.write(', ')
        file.write(x[3])
        file.write(', ')
        if x[1] in bidDict:
            if x[3] in bidDict[x[1]]:
                
                file.write(bidDict[x[1]][x[3]])
        
                #if x[4] < bidDict[x[1]][x[3]]:
                #   bidDict.setdefault( x[1], {}).setdefault( x[3], x[4])
    
        file.write(', ')
        if x[1] in askDict:
            if x[3] in askDict[x[1]]:
                file.write(askDict[x[1]][x[3]])
                    #if x[4] > askDict[x[1]][x[3]]:
                    #lineNum +=1
        
        file.write('\n')
    #file.write(', '.join(x))
        
        
    elif (x[5]== ask):
        if x[1] in askDict:
            if x[3] in askDict[x[1]]:
                askDict[x[1]][x[3]]=x[4]
            else:
                askDict.setdefault( x[1], {}).setdefault( x[3], x[4])
        else:
            askDict.setdefault( x[1], {}).setdefault( x[3], x[4])

    elif (x[5]==bid):
        if x[1] in bidDict:
            if x[3] in bidDict[x[1]]:
                bidDict[x[1]][x[3]]=x[4]
            else:
                bidDict.setdefault( x[1], {}).setdefault( x[3], x[4])
        else:
            bidDict.setdefault( x[1], {}).setdefault( x[3], x[4])
        


file.close()
futures.close()
#file.write(', '.join(y for y in bidDict[x[1]]))
