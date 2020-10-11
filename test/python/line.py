import math

def line(limit,cycle,x):
    return math.pow(-1, int(x)/cycle)*(1.0*limit/cycle*x - int(x+cycle)/(2*cycle)*2*limit)-1.0*limit/2
    #x=int(x)
    #return math.pow(-1, x/cycle)*((limit/cycle-1)*x - limit/cycle)

for i in range(100):
    print(i, line(10,7,i))