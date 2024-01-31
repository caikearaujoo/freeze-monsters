module Main(main) where
main::IO()
main = do
  putStrLn "Digite a nota 1 do aluno: "
  n1 <- readLn :: IO Float
  putStrLn "Digite a nota 2 do aluno: "
  n2 <- readLn :: IO Float
  putStrLn "Digite a nota 3 do aluno: "
  n3 <- readLn :: IO Float
  let media = (n1+n2+n3)/3
  putStrLn("A situacao do aluno eh " ++ calcula media)

calcula:: Float->String
calcula media 
 |media<3 = "Reprovado"
 |media>7 = "Aprovado"
 |otherwise = "Exame especial"
