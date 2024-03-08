import Data.Char
 --ex 1

extraiPrimeiro:: [(a,b)]->[a]
extraiPrimeiro lista = map fst lista

maiusculas:: String -> String
maiuscula str = map toUpper str

dobros::Num a => [a] ->[a]
dobros lista = map (*2) lista

--ex 2

pares:: [Int] -> [Int]
pares lista = filter even lista

alfa:: String -> String 
alfa str = filter isAlpha str

rm_char:: Char -> String -> String
rm_char c str = filter (/= 'c') str

--ex 3

produto:: Num a=>[a] -> a
produto lista = foldr (*) 1 lista

e_logico:: [Bool]->Bool
e_logico lista = foldr (&&) True lista

concatena:: [String] -> String
concatena lista = foldr (++) "" lista
