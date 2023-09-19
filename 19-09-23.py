#First Set Bit of Number 

def getFirstSetBit(self,n):
  #Your code here
  k = 0
  if(n&1 == 1): return 1
  while((n&1 != 1) and (n > 0)): n = n>>1; k+=1
  if(k == 0): return k
  return k+1
