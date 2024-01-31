module Main(main) where
main::IO()
main = do
  putStrLn "Digite uma temperatura em fahrenheit: "
  x <- readLn :: IO Double
  putStrLn "Temperatura em fahrenheit: "
  print(x)
  putStrLn "Temperatura em celsius: "
  let num = celsius(x)
  print(num)

celsius:: Double->Double
celsius f =(5/9) * (f-32)
