% livro(nome('C completo e total'), autor('Schildt'), pal_chave([linguagemc, programacao, computacao])).

livro(nome('C completo e total'), autor('Schildt'), pal_chave([linguagemc, programacao, computacao])).
livro(nome('Introdução à Linguagem C'), autor('Kernighan'), pal_chave([linguagemc, programacao, linguagem])).
livro(nome('Algoritmos e Estruturas de Dados em C'), autor('Drozdek'), pal_chave([linguagemc, programacao, estruturasdedados])).
livro(nome('A Arte de Programar'), autor('Knuth'), pal_chave([algoritmos, programacao, computacao])).
livro(nome('Aprenda Computação com Python'), autor('Shaw'), pal_chave([python, programacao, computacao])).
livro(nome('Estrutura de Dados e Algoritmos em Python'), autor('Goodrich'), pal_chave([python, estruturasdedados, algoritmos])).
livro(nome('Programação em Java'), autor('Deitel'), pal_chave([java, programacao, linguagem])).
livro(nome('Banco de Dados: Projeto e Implementação'), autor('Elmasri'), pal_chave(['banco de dados', database, modelagem])).
livro(nome('Inteligência Artificial: Uma Abordagem Moderna'), autor('Russell'), pal_chave(['inteligencia artificial', 'machine learning', algoritmos])).
livro(nome('Redes de Computadores'), autor('Tanenbaum'), pal_chave([redes, computacao, protocolos])).



procura(Lista, Nome, Autor):-
    livro(nome(Nome), autor(Autor), pal_chave(Palavras)),
    verifica(Lista, Palavras).

verifica([PalavraDesejada|_], Palavras):-
    member(PalavraDesejada, Palavras).
    
verifica([_|Cauda], Palavras):-
    verifica(Cauda, Palavras).
