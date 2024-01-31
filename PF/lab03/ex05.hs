module Main(main) where
main::IO()
main = do
  putStrLn "Digite sua idade: "
  idade <- readLn :: IO Int
  putStrLn(calcula idade)

calcula:: Int->String
calcula idade 
 |idade<16 = "Nao eleitor"
 |idade>=18 && idade<65 = "Eleitor obrigatório"
 |(idade>=16 && idade<18 || idade>=65) = "Eleitor facultativo"
 |otherwise = "Fodasse"
