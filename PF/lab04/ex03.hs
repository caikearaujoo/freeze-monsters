exp11 :: Int->Int->Int
exp11 a b
  |b == 0 = 1
  |otherwise = a* exp11 a (b-1)
