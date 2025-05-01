module Main(main) where
main::IO()
main = do
		putStr "Digite uma string: "
		frase <- getLine
		if(palindromo frase) then putStrLn "A palavra eh um palindromo"
			else putStrLn "A palavra nao eh palindromo"

palindromo:: String->Bool
palindromo frase = if(frase == reverse frase) then True else False
