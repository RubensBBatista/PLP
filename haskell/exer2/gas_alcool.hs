calcula_preco :: Double -> Double -> Double -> Double
calcula_preco a g l = if ((0.7 * g) > a) then (l * a) else (l * g)

main :: IO ()
main = do
		a <- getLine
		ga <- getLine
		l <- getLine
		putStrLn(show(calcula_preco (read a) (read ga) (read l)))