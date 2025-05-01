homem(ivo).
homem(gil).
homem(rai).
homem(ary).
homem(noe).

mulher(ana).
mulher(eva).
mulher(bia).
mulher(clô).
mulher(lia).
mulher(gal).

gerou(ana, eva).
gerou(ivo, eva).
gerou(bia, rai).
gerou(bia, clo).
gerou(bia, ary).
gerou(gil, rai).
gerou(gil, clo).
gerou(gil, ary).
gerou(ary, gal).
gerou(lia, gal).
gerou(eva, noe).
gerou(rai, noe).

pai(X,Y):- homem(X), gerou(X,Y).

mae(X,Y):- mulher(X), gerou(X,Y).

irmãos(X,Y):- gerou(Z,X), gerou(Z,Y).

irmã(X,Y):- (   (   mulher(X), pai(Z,X), pai(Z,Y) ) ; (   mulher(X), mae(Z,X), mae(Z, Y) )).

irmão(X,Y):- (   (   homem(X), pai(Z,X), pai(Z,Y) ) ; (   homem(X), mae(Z, X), mae(Z, Y) )).

tio(X,Y):- homem(X), irmão(X,Z), gerou(Z,Y).

tia(X,Y):- mulher(X), irmã(X,Z), gerou(Z,Y).

avô(X,Y):- homem(X), pai(X, Z), pai(Z, Y).

avó(X,Y):- mulher(X), mãe(X, Z), mãe(Z, Y).
