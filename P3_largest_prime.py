"""
Largest prime
"""
num     = 600851475143
div     = 2
quot    = num
num_temp = num
div_temp = div

while(quot != 1):
    if( ( num_temp % div_temp) < 0.1 ):
        num_temp    /= div_temp
