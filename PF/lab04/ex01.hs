fatDuplo:: Int->Int
fatDuplo n 
  |n == 0 = 1
  |n == 1 = 1
  |n>0 = fatDuplo(n-2)*n
  |otherwise = 0
