pai(jose, lucio).
pai(joao, luciano).
pai(mario, fabricio).
pai(mario, lucas).

mae(maria, luciano).
mae(ana, lucia).
mae(joana, murilo).

feliz(X):- pai(X,_) ; mae(X,_).

casal(X,Y):- pai(X,Z), mae(Y,Z).
