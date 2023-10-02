filme('amnésia', 'suspense', 'nolan', 2000, 113).
filme('babel', 'drama', 'innaritu', 2006, 142).
filme('capote', 'drama', 'miller', 2005, 98).
filme('casablanca', 'romance', 'curtiz', 1942, 102).
filme('matrix', 'ficção', 'washowsk', 1999, 136).
filme('robocco','suspense', 'hitchcock', 1940, 130).
filme('shrek', 'aventura', 'adamson', 2001, 90).
filme('Superman','Aventura','Donner',1997,143).
filme('Titanic','Romance','Cameron',1997,194).
filme('Tubarão','Suspense','Spielberg',1975,124).
filme('Volver','Drama','Almodóvar',2006,121).
filme('Sinais', 'Ficção', 'Shymalan', 2002, 106).
filme('Spartacus', 'Ação', 'Kubrik', 1960, 184).

diretor(X, V) :- filme(V, _, X, _, _).

genero(V, W) :- filme(V, W, _, _, _).

dirigiu(X, V) :- filme(V, _, X, _, _).

ano(V, Y) :- filme(V, _, _, Y, _).

duracao(Z, V) :- filme(V, _, _, _, Z).

lancamento(Y,V):- filme(V, _, _, Y, _).

classico(Y):- filme(Y, _, _, X, _), X<1980.

mix(X,Y):- genero(X,Y), classico(X).
