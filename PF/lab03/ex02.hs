module Main(main) where
main::IO()
main = do
  putStrLn "Digite um numero em ponto flutuante: "
  x <- getLine
  putStrLn "Digite um numero2 em ponto flutuante: "
  y <- getLine
  putStrLn "Digite um numero3 em ponto flutuante: "
  z <- getLine
  print((read x :: Float) * (read y :: Float) * (read z :: Float))
