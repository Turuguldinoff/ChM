import math
 
def my_cos (x,n):
 
 
    x = x/180*math.pi
    x = x%(360)

    e = 10** -n
 
    s = 1
    i = 0
    h = 1
    q = 9000
    b = 1 
 
    while e < abs(q):
        i = i+ 1
        h = h* i
        if i%2 == 0:
            b = -b
            q = b*(x** i)/h
            s = s+ q
    print(s)
    return s
 
 
my_cos(float(input("enter x")),int(input("enter n")))
input()
