funcao :: Bool->Bool->Bool
funcao p q = ((p || q) && not(p && q))

funcao2 :: Bool->Bool->Bool
funcao2 p q = q /= p 

funcao3 :: Bool->Bool->Bool
funcao3 p q = if q /= p then True else False

funcao4 :: Bool->Bool->Bool
funcao4 p q  
	|p/=q = True
	|otherwise = False
 
par :: Int->Bool
par x = if even x then True else False

impar :: Int->Bool
impar x = if odd x then True else False

maior :: Int->Int->Int
maior x y
	|x>y = x
	|y>x = y
	|otherwise = x

menor :: Int->Int->Int
menor x y
	|x<y = x
	|y<x = y
	|otherwise = x

area :: Float->Float
area d = pi*(r**2)
	where 
	r = (d/2)

numRaizes :: Float->Float->Float->Float
numRaizes a b c
  |delta > 0 = 2
  |delta < 0 = 0
  |otherwise = 0
 where delta = (b^2 - 4*(a*c))

menu :: Float->Float->Float->Float
menu x y n
	|n == 1 = x+y
	|n==2 = x-y
	|n==3 = x*y
	|n==4 = if(y/=0) then x/y else -1 
	|otherwise = -1
