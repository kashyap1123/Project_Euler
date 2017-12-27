"""
Sum all the even numbers in the Fib seq uptil a certain numbers
"""

import numpy
# Use deMoivre's result
phi = (1 + pow(5,0.5))/2
psi = 1 - phi
print('Phi is ', phi )
print('Psi is ', psi )

def fib(n):
    a  = (pow(phi,n)-pow(psi,n))/(pow(5,0.5))
    return(a)

thresh = 4 * pow(10,6)
# thresh = 0 * pow(10,6)
n = 2
sum_fib = 0
fib_temp = fib(n)
while(fib_temp < thresh):
    fib_temp = fib(n)
    if( ( fib_temp % 2 ) < 0.1 ):
        fib_temp_1 = fib_temp
    else:
        fib_temp_1 = 0
    sum_fib += fib_temp_1
    n += 1
    print(fib_temp_1)

print(sum_fib)
