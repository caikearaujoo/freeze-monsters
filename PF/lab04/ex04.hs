nand1 :: Bool -> Bool -> Bool
nand1 p q = if(p == True && q == True) then False else True

nand2 :: Bool -> Bool -> Bool
nand2 p q 
  |p == True && q == True = False
  |otherwise = True

nand3 :: Bool -> Bool -> Bool
nand3 True True = False
nand3 _ _ = True
