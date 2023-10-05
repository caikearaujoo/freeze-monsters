caminho(a, b, 5).
caminho(a, c, 10).
caminho(a, f, 5).
caminho(a, g, 75).
caminho(b, e, 25).
caminho(b, f, 0).
caminho(c, d, 10).
caminho(d, e, 5).
caminho(e, f, 5).
caminho(g, f, 20).

percurso(X,Y,P):- caminho(X,Y,P).

percurso(X,Y,P):- caminho(X,Z,P1),
    			  percurso(Z,Y,P2),
				  P is P1 + P2.
