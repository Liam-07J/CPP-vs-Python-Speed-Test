import time

def prime(i):
    if i == 1:
        return "not prime"
    for j in range(2, i):
        if i % j == 0:
            return "not prime"
    return "prime"
startTime = time.time()
i=0
while i<=1000000:
    print(str(i)+" is "+prime(i))
    i+=1
endTime = time.time()
print("Time taken: "+str(endTime-startTime))