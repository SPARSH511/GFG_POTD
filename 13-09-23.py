
#Largest number possible 
def findLargest(self, n, s):
  if(n == 0): return "-1"
  if(s == 0 and n > 1): return "-1"
  ans = ""
  for i in range(n):
      if(s == 0): ans+="0"
      else:
          for j in range(9,0,-1):
              if(s >= j): 
                  s-=j; ans+=str(j); break
  if(s != 0): return "-1"
  return ans
