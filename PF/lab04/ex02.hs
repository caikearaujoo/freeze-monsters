quoci :: Int -> Int -> Int
quoci n p
  | n == p = 1
  | n == 0 = 0
  | n > p = p + quoci (n - p*p) p
  | otherwise = 0
