valor :: String -> Int
valor veiculo | (veiculo == "moto") = 5
			  | (veiculo == "carro") = 10
			  | otherwise = 30

main :: IO ()
main = do
		veiculo <- getLine
		putStrLn(show(valor veiculo))