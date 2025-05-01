quoci :: Int -> Int -> Int
quoci n p
  | n == p = 1
  | n == 0 = 0
  | n > p = p + quoci (n - p*p) p
  | otherwise = 0

resto :: Int ->Int -> Int
resto p q
 |p<q = p
 |otherwise = resto(p-q) q
