import time
t1=time.time()
for i in range(0,20):
    for j in range(20,800):
        for k in range(800,1500):
            print i,j,k
t2=time.time()
print "Total Time: ",t2-t1
