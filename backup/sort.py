futures = open("/Users/retsoom/Documents/Spring2015/FIN580/RMProject/cmeData/build/Debug/futuresTrades.txt", "r")
file = open("/Users/retsoom/Documents/Spring2015/FIN580/RMProject/cmeData/build/Debug/futuresTradeSorted.csv", "w")
file.seek(0 , 0)
futures.seek(0 , 0)
arr = []
for line in futures.readlines():
    temp = []
    temp = line.split()
        #if len(temp)>3:
    tup1 = (int(temp[0]), int(temp[1]),  temp[2])
        #tup1 = (int(temp[0]), int(temp[1]), int(temp[2]), int(temp[3]), int(temp[4]))
    arr.append(tup1)

arr.sort(key = lambda tup:tup[0])


#file.write('\n' .join('{}, {}, {}, {}, {}'.format(x[0],x[1],x[2], x[3], x[4]) for x in arr))
file.write('\n' .join('{}, {}, {}'.format(x[0],x[1],x[2]) for x in arr))
file.close()
futures.close()
