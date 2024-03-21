data Forma = Circulo Float | Retangulo Float Float | Triangulo Float Float

ehRedonda::Forma->Bool
ehRedonda (Circulo _) = True
ehRedonda _ = False

calculaArea:: Forma->Float
calculaArea (Circulo raio) = pi * raio * raio
calculaArea (Retangulo lado1 lado2) = lado1 * lado2
calculaArea (Triangulo base altura) = (base * altura)/2

--C) Float->Forma, Float->Float->Forma

--Questao 2:

dobro:: Num=>a->a
dobro x = x*2

aprovado:: Int->Bool
aprovado nota = nota >= 6

myLog:: Floating a => a -> a -> a
myLog x b = log x / log b

--Questao 3:

--a) [[a]]  (LISTA)
--b) Num a -> [[a]]
--c) Tipo Fractional
--d) Tipo Num a, Fractional b
--f) Tipo Foldable


--Questao 4:
type Ponto = (Float, Float)
data Coordenada = Coord Float Float

somaCoord:: Ponto->Ponto->Ponto
somaCoord (xa, ya) (xb, yb) = (xa+xb, ya+yb)


somaCoord2:: Coordenada->Coordenada->(Float, Float)
somaCoord2 (Coord xa ya) (Coord xb yb) = (xa+xb, ya+yb)
