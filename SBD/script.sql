Caike Cesar Mota de Araújo - 12221bcc030
Felipe Santos Silva - 12221BCC042
Diego de Miranda da Silva - 12311BCC0603




BANCO DE DADOS - ELEIÇÃO
B) SELECT NR_CANDIDATO, NM_URNA_CANDIDATO FROM candidato WHERE NM_UE = 'UBERLÂNDIA' ORDER BY NM_URNA_CANDIDATO DESC


C) SELECT NM_CANDIDATO FROM candidato WHERE NM_UE = 'ACRE' AND dt_nascimento < '1954-01-01'


D) SELECT NM_URNA_CANDIDATO FROM candidato 
WHERE NM_URNA_CANDIDATO LIKE 'LULA %'
OR NM_URNA_CANDIDATO LIKE '% LULA' 
OR NM_URNA_CANDIDATO LIKE '% BOLSONARO' 
OR NM_URNA_CANDIDATO LIKE 'BOLSONARO %';


E) SELECT NM_CANDIDATO, DS_GRAU_INSTRUCAO FROM CANDIDATO, GRAU_INSTRUCAO WHERE SG_UF = 'SP'
AND NM_UE = 'CASA BRANCA' AND CANDIDATO.CD_GRAU_INSTRUCAO = GRAU_INSTRUCAO.CD_GRAU_INSTRUCAO


F) SELECT NM_CANDIDATO, PARTIDO.SG_PARTIDO FROM CANDIDATO, CARGO,PARTIDO WHERE cd_genero = '4' 
AND CANDIDATO.cd_cargo = 13 
AND CANDIDATO.cd_cargo = CARGO.CD_CARGO 
AND CARGO.DS_CARGO ='VEREADOR' 
AND CANDIDATO.NR_PARTIDO = PARTIDO.NR_PARTIDO


G) SELECT DISTINCT O.DS_OCUPACAO
FROM CANDIDATO C, PARTIDO P, OCUPACAO O
WHERE P.SG_PARTIDO = 'PSDB'
AND C.NR_PARTIDO = P.NR_PARTIDO
AND C.CD_OCUPACAO = O.CD_OCUPACAO
AND C.SG_UF = 'BA';


H) SELECT C.NM_URNA_CANDIDATO, C.NR_CANDIDATO, P.SG_PARTIDO, CO.DS_COLIGACAO
FROM CANDIDATO C, PARTIDO P, COLIGACAO CO, CARGO CRG
WHERE C.CD_CARGO = CRG.CD_CARGO
AND C.NR_PARTIDO = P.NR_PARTIDO
AND C.SQ_COLIGACAO = CO.SQ_COLIGACAO
AND (CRG.DS_CARGO = 'Prefeito' OR CRG.DS_CARGO = 'Vice-Prefeito')
AND UPPER(C.NM_UE) IN ('SÃO PAULO', 'RIO DE JANEIRO', 'BELO HORIZONTE', 'VITÓRIA');


I) SELECT NM_CANDIDATO, SG_PARTIDO, DS_TIPO_BEM_CANDIDATO, VR_BEM_CANDIDATO
        FROM CANDIDATO, BEM_CANDIDATO, CARGO, PARTIDO
        WHERE CANDIDATO.NM_UE = 'SÃO PAULO' 
                AND CANDIDATO.CD_CARGO = CARGO.CD_CARGO 
                AND CARGO.DS_CARGO = 'PREFEITO' 
                AND        CANDIDATO.NR_PARTIDO = PARTIDO.NR_PARTIDO 
                AND CANDIDATO.SQ_CANDIDATO = BEM_CANDIDATO.SQ_CANDIDATO;


"nm_candidato"        "sg_partido"        "ds_tipo_bem_candidato"
"JOSE LUIZ DATENA"        "PSDB"        "Apartamento"
"JOSE LUIZ DATENA"        "PSDB"        "Casa"
"JOSE LUIZ DATENA"        "PSDB"        "Terreno"
"JOSE LUIZ DATENA"        "PSDB"        "Terreno"




J) SELECT nm_candidato, dt_nascimento
        FROM candidato
        WHERE dt_nascimento IS NULL;


"nm_candidato"
"LEANDRO SOUZA CARVALHO"        
"JOÃO CARLOS BUREI"        
"MAURO SERGIO PROVIN DA SILVA"        
"SIDINEIA DE CASTRO MONTEIRO"        
"JOSÉ HERCULANO PEREIRA DOS SANTOS"        
"ALEXANDRE BUCHAUL DE AZEVEDO"        
"VANILA GOMES MARQUES"        


K) 
SELECT NM_CANDIDATO,SG_PARTIDO,DS_ESTADO_CIVIL,DS_OCUPACAO 
        FROM CANDIDATO C, PARTIDO P, OCUPACAO O, GENERO G, ESTADO_CIVIL E
        WHERE  DS_GENERO = 'FEMININO' 
                AND C.CD_GENERO = G.CD_GENERO 
                AND C.NR_PARTIDO = P.NR_PARTIDO 
                AND C.CD_ESTADO_CIVIL=E.CD_ESTADO_CIVIL 
                AND C.CD_OCUPACAO=O.CD_OCUPACAO 
                AND UPPER(NM_UE) IN ('BELO HORIZONTE ','RIO DE JANEIRO','SÃO PAULO','VITÓRIA'); //EVITAR ERROS DE COMPARACAO!!!! 


"nm_candidato"        "sg_partido"        "ds_estado_civil"        "ds_ocupacao"


"SANDRA LUCIA ALEIXO DA SILVA"        "PSDB"        "CASADO(A)"        "OUTROS"
"DAYSE FREITAS DE MESQUITA"        "PT"        "CASADO(A)"        "PROFESSOR DE ENSINO SUPERIOR"
"ELIZABETH DO CARMO VIEIRA"        "PV"        "CASADO(A)"        "OUTROS"
"ANDREA SANT ANA FERREIRA MARTINS"        "DC"        "CASADO(A)"        "COMERCIANTE"
"LIVIA MARIA RODRIGUES FIDELIX DA CRUZ"        "PRTB"        "SOLTEIRO(A)"        "OUTROS"
"LEILIANE RAFAEL DA SILVA"        "SOLIDARIEDADE"        "SOLTEIRO(A)"        "DONA DE CASA"




L) Enunciado: Listar os candidatos que pertencem a um partido específico e suas respectivas coligações.


Comando: SELECT C.NM_CANDIDATO, P.NM_PARTIDO, CO.NM_COLIGACAO
FROM candidato C, partido P, coligacao CO
WHERE C.NR_PARTIDO = P.NR_PARTIDO
  AND C.SQ_COLIGACAO = CO.SQ_COLIGACAO;


Resultado: "SIDNEI ECKERT"        "MOVIMENTO DEMOCRÁTICO BRASILEIRO"        "ARROIO DO MEIO PARA TODOS"
"OLAVO RIBEIRO DE MIRA"        "PARTIDO DA SOCIAL DEMOCRACIA BRASILEIRA"        "FEDERAÇÃO"
"DAVI QUINTILIANO"        "SOLIDARIEDADE"        "PARTIDO ISOLADO"
"EVANELL TEIXEIRA SILVA SOUSA MOURA"        "PARTIDO DOS TRABALHADORES"        "FEDERAÇÃO"
"PRISCILA SANTA MARIA"        "PARTIDO DA SOCIAL DEMOCRACIA BRASILEIRA"        "FEDERAÇÃO"
"AURIZETE LEAL FERREIRA BRANDAO"        "UNIÃO BRASIL"        "PARTIDO ISOLADO"
"DISLENE FERREIRA SILVA LEITE"        "PARTIDO LIBERAL"        "PARTIDO ISOLADO"
"JOSE HELIO SANTOS"        "PROGRESSISTAS"        "PARTIDO ISOLADO"
"LEONARDO NASCIMENTO"        "PARTIDO RENOVAÇÃO DEMOCRÁTICA"        "PARTIDO ISOLADO"
"NILZETE JESUS DOS SANTOS"        "PARTIDO DOS TRABALHADORES"        "FEDERAÇÃO"
"JOSÉ WILTON FERREIRA"        "PARTIDO DOS TRABALHADORES"        "FEDERAÇÃO"
"JOSSUÉ ALVES DA SILVA"        "PARTIDO DEMOCRÁTICO TRABALHISTA"        "PARTIDO ISOLADO"


B - ) Enunciado: Listar todos os candidatos que possuem bens e o valor de cada bem.


Comando: SELECT C.NM_CANDIDATO, B.DS_TIPO_BEM_CANDIDATO, B.VR_BEM_CANDIDATO
FROM CANDIDATO C, BEM_CANDIDATO B
WHERE C.SQ_CANDIDATO = B.SQ_CANDIDATO;


Resultado: "EDSON DOS SANTOS"        "Veículo automotor terrestre: caminhão, automóvel, moto, etc."        "97900.00"
"CAETANO ILAIR ALIEVI"        "Outras aplicações e Investimentos"        "154.19"
"GENEILTON FILHO DE ASSIS"        "Quotas ou quinhões de capital"        "24750.00"
"ROGERIO LIMA DA SILVA"        "Terra nua"        "120000.00"
"FERNANDO CESAR TEIXEIRA"        "Outras aplicações e Investimentos"        "24000.00"
"MARCIO DIAS DE MORAES"        "Outras aplicações e Investimentos"        "217.22"
"MANOEL TEOFILO ROCHA"        "OUTROS BENS E DIREITOS"        "30000.00"
"CLEUSA MARIA PIZZOLO"        "Quotas ou quinhões de capital"        "80000.00"
"ADÃO LUIZ FERNANDES"        "Quotas ou quinhões de capital"        "40000.00"
"WAGNER LUCENA DA SILVA SANTANA"        "Quotas ou quinhões de capital"        "10000.00"
"WAGNER LUCENA DA SILVA SANTANA"        "Ações (inclusive as provenientes de linha telefônica)"        "700.00"
"ANA CAROLINA DIAS DE MOURA"        "Veículo automotor terrestre: caminhão, automóvel, moto, etc."        "25000.00"
"ANA CAROLINA DIAS DE MOURA"        "Veículo automotor terrestre: caminhão, automóvel, moto, etc."        "15000.00"

NOME: CAIKE CESAR MOTA DE ARAUJO 12221BCC030
FELIPE SANTOS SILVA 12221bcc042
1) Usando o BD criado na atividade anterior, especificar consultas para as seguintes pesquisas:  
 
a) Qual o maior e o menor valor de bem dos candidatos do estado de Minas Gerais. 
SET search_path TO 'eleicoes_2024'


SELECT c.SG_UF, c.NM_CANDIDATO, MAX(bc.VR_BEM_CANDIDATO), MIN(bc.VR_BEM_CANDIDATO)
FROM BEM_CANDIDATO bc, CANDIDATO c
WHERE c.SQ_CANDIDATO = bc.SQ_CANDIDATO
AND c.SG_UF = 'MG'
GROUP BY c.NM_CANDIDATO, c.SG_UF
 
b) Qual o nome, o número do partido, o estado e a cidade do candidato que possui o maior valor de bem. Deve retornar também o valor do bem.  
SELECT c.NM_CANDIDATO, c.NR_PARTIDO, c.SG_UF, c.NM_UE, 
       (SELECT MAX(VR_BEM_CANDIDATO) FROM BEM_CANDIDATO) AS maior_valor_bem
FROM CANDIDATO c
WHERE c.SQ_CANDIDATO = (
    SELECT SQ_CANDIDATO
    FROM BEM_CANDIDATO
    ORDER BY VR_BEM_CANDIDATO DESC
    LIMIT 1
);




 






c) Qual a média dos valores dos bens do candidato 'JOSE LUIZ DATENA'. 
SELECT AVG (VR_BEM_CANDIDATO)
FROM BEM_CANDIDATO bm, CANDIDATO c
WHERE C.NM_CANDIDATO = 'JOSE LUIZ DATENA'
AND bm.SQ_CANDIDATO = c.SQ_CANDIDATO


 
d) Quantos candidatos ao cargo de vereador cada estado possui. Deve retornar o estado e a quantidade considerando a ordenação em ordem alfabética por estado.  
SELECT c.SG_UF, count(c.NM_CANDIDATO)
FROM CANDIDATO c, CARGO cc
WHERE cc.CD_CARGO = 13
AND c.CD_CARGO = cc.CD_CARGO
GROUP BY c.SG_UF


e) Quantas candidatas do gênero feminino estão concorrendo ao cargo de vereador por capital da região sudeste.  
 SELECT c.NM_UE, COUNT(c.NM_CANDIDATO)
FROM CANDIDATO c, CARGO cg
WHERE cg.CD_CARGO = 13
AND c.NM_UE ='BELO HORIZONTE' OR c.NM_UE ='SÃO PAULO' OR c.NM_UE = 'VITÓRIA' OR c.NM_UE = 'RIO DE JANEIRO'
AND c.CD_GENERO = 4
AND c.CD_CARGO = cg.CD_cARGO
GROUP BY c.NM_UE


f) Quantas coligações distintas existem nas eleições de 2024.  
 
SELECT COUNT(DISTINCT cl.SQ_COLIGACAO)
FROM COLIGACAO cl;


g) Quantas candidatas do gênero feminino estão concorrendo ao cargo de vereador por partido político na cidade de 'UBERLÂNDIA'. Devem ser exibidos no resultado a sigla do partido e a quantidade.  
 SELECT pd.SG_PARTIDO, COUNT(pd.SG_PARTIDO)
FROM CANDIDATO c, CARGO cg, PARTIDO pd
WHERE cg.CD_CARGO = 13
AND c.NM_UE = 'UBERLÂNDIA'
AND c.CD_GENERO = 4
AND c.CD_CARGO = cg.CD_cARGO
AND c.NR_PARTIDO = pd.NR_PARTIDO
GROUP BY pd.SG_PARTIDO


h) Quais são os partidos políticos que possuem mais do que 10 candidatos do gênero feminino na cidade de 'SÃO PAULO'. Devem ser exibidos no resultado a sigla do partido e a quantidade.  
 SELECT pd.SG_PARTIDO, COUNT(pd.SG_PARTIDO)
FROM CANDIDATO c, CARGO cg, PARTIDO pd
WHERE c.CD_GENERO = 4
AND c.NM_UE = 'SÃO PAULO'
AND c.NR_PARTIDO = pd.NR_PARTIDO
GROUP BY pd.SG_PARTIDO
HAVING COUNT(*) > 10;


i) Qual a quantidade de candidatos por partido e por cor/raça concorrendo nas eleições de 2024 na cidade de 'CUIABÁ'. Deve retornar a sigla do partido, a descrição cor/raça e a quantidade.  
 
SELECT pd.SG_PARTIDO, COUNT(cr.DS_COR_RACA), cr.DS_COR_RACA
FROM CANDIDATO c, CARGO cg, PARTIDO pd, COR_RACA cr
WHERE c.NM_UE = 'CUIABÁ'
AND c.NR_PARTIDO = pd.NR_PARTIDO
AND c.CD_COR_RACA = cr.Cd_COR_RACA
GROUP BY pd.sg_partido, cr.DS_COR_RACA


j) Qual o partido político com a maior quantidade de candidatos na cidade de 'BELO HORIZONTE'. Devem ser exibidos no resultado o número do partido e a quantidade.  
 SELECT pd.NR_PARTIDO, COUNT(c.SQ_CANDIDATO)
FROM CANDIDATO c, PARTIDO pd
WHERE c.NM_UE = 'BELO HORIZONTE'
AND c.NR_PARTIDO = pd.NR_PARTIDO
GROUP BY pd.NR_PARTIDO
ORDER BY COUNT(c.SQ_CANDIDATO) DESC
LIMIT 1


k) Apresente o enunciado, o comando SQL, e o resultado da execução do comando para mais duas consultas que você julgue serem interessantes (devem ser diferentes das apresentadas na lista e devem envolver a junção de pelo menos 2 tabelas e group by ou aninhamento). 
*Mostrar número de candidatos por partido e por estado.


SELECT 
    p.NM_PARTIDO, 
    c.NR_PARTIDO, 
    c.SG_UF, 
    COUNT(c.SQ_CANDIDATO) AS NUM_CANDIDATOS
FROM 
    CANDIDATO c
JOIN 
    PARTIDO p ON c.NR_PARTIDO = p.NR_PARTIDO
GROUP BY 
    p.NM_PARTIDO, c.NR_PARTIDO, c.SG_UF
ORDER BY 
    c.SG_UF, NUM_CANDIDATOS DESC;


—------------------------------------------------------------------------------------------------------------------------






Exibir a quantidade total de candidatos por estado (UF) e cidade (NM_UE), ordenado pela quantidade de candidatos.


SELECT 
    c.SG_UF,
    c.NM_UE,
    COUNT(*) AS quantidade_candidatos
FROM CANDIDATO c
GROUP BY c.SG_UF, c.NM_UE
ORDER BY quantidade_candidatos DESC;

Caike Cesar Mota de Araújo - 12221bcc030
Felipe Santos Silva - 12221BCC042
Diego de Miranda da Silva - 12311BCC0603



a) SELECT * FROM CURSO;

2142	"ENGENHARIA CIVIL              "	1500
2143	"CIENCIA DA COMPUTACAO         "	2000
2144	"DIREITO                       "	1750
2145	"PEDAGOGIA                     "	1500
2146	"ODONTOLOGIA                   "	1600

b) SELECT Nome, Telefone FROM Aluno WHERE Cidade = 'SAO CARLOS - SP' ORDER BY Nome DESC;

"SIMONE CRISTINA LIMA                                                  "	"(017)273-9865            "
"MARCOS JOAO CASANOVA                                                  "	"(017)274-9874            "
"JOSE PAULO FIGUEIRA                                                   "	"(017)274-9873            "
"JOAO BENEDITO SCAPIN                                                  "	"(017)273-8974            "
"EDVALDO CARLOS SILVA                                                  "	"(017)276-9999            "

c) SELECT Nome FROM Professor WHERE Admissao < '01-01-1993'

"ABGAIR SIMON FERREIRA                                                 "

d) SELECT Nome FROM Aluno WHERE Nome LIKE 'J%'

"JOAO BENEDITO SCAPIN                                                  "
"JOSE PAULO FIGUEIRA                                                   "

e) SELECT Disciplina.Nome FROM DisciplinaCurso, Curso, Disciplina 
WHERE Curso.Nome = 'CIENCIA DA COMPUTACAO'
AND DisciplinaCurso.NumCurso = Curso.NumCurso
AND Disciplina.NumDisp = DisciplinaCurso.NumDisp;

"BANCO DE DADOS                "
"ESTRUTURA DE DADOS            "
"CALCULO NUMERICO              "
"ENGENHARIA DE SOFTWARE        "

f) SELECT Curso.Nome FROM DisciplinaCurso, Curso, Disciplina 
WHERE Disciplina.Nome = 'CALCULO NUMERICO'
AND Disciplina.NumDisp = DisciplinaCurso.NumDisp
AND DisciplinaCurso.NumCurso = Curso.NumCurso

"CIENCIA DA COMPUTACAO         "
"ENGENHARIA CIVIL              "

g) SELECT Disciplina.Nome FROM Aluno, Disciplina, Aula
WHERE Aula.Semestre = '01/1998'
AND Aluno.Nome = 'MARCOS JOAO CASANOVA'
AND Aula.NumAluno = Aluno.NumAluno
AND Aula.NumDisp = Disciplina.NumDisp;

"BANCO DE DADOS                "
"ESTRUTURA DE DADOS            "
"CALCULO NUMERICO              "
"ENGENHARIA DE SOFTWARE        "

h) 
SELECT Disciplina.Nome FROM Aluno, Disciplina, Aula
WHERE Aula.Nota < 7
AND Aluno.Nome = 'AILTON CASTRO'
AND Aula.NumAluno = Aluno.NumAluno
AND Aula.NumDisp = Disciplina.NumDisp;

"CALCULO NUMERICO              "

I) SELECT Aluno.Nome FROM Aluno, Disciplina, Aula
WHERE Aula.Nota < 7
AND Disciplina.Nome = 'CALCULO NUMERICO'
AND Aula.Semestre = '01/1998'
AND Aula.NumAluno = Aluno.NumAluno
AND Aula.NumDisp = Disciplina.NumDisp;

"MARCOS JOAO CASANOVA                                                  "
"AILTON CASTRO                                                         "

J) 
SELECT Disciplina.Nome FROM Disciplina, Aula, Professor
WHERE Professor.Nome = 'RAMON TRAVANTI'
AND Aula.NumFunc = Professor.NumFunc
AND Aula.NumDisp = Disciplina.NumDisp;

"DIREITO PENAL                 "
"DIREITO PENAL                 "
"DIREITO TRIBUTARIO            "

K) SELECT Professor.Nome FROM Disciplina, Aula, Professor
WHERE Disciplina.Nome = 'BANCO DE DADOS'
AND Aula.NumDisp = Disciplina.NumDisp
AND Aula.NumFunc = Professor.NumFunc

"ABGAIR SIMON FERREIRA                                                 "
"ABGAIR SIMON FERREIRA                                                 "

L) SELECT Disciplina.Nome,
       Professor.Nome,
       Aluno.Nome
FROM Aluno, Disciplina, Professor, Aula
WHERE Aula.Semestre = '01/1998'
  AND Aula.NumAluno = Aluno.NumAluno
  AND Aula.NumDisp = Disciplina.NumDisp
  AND Aula.NumFunc = Professor.NumFunc
ORDER BY Disciplina.Nome, Aluno.Nome

"BANCO DE DADOS                "	"ABGAIR SIMON FERREIRA                                                 "	"EDVALDO CARLOS SILVA                                                  "
"BANCO DE DADOS                "	"ABGAIR SIMON FERREIRA                                                 "	"MARCOS JOAO CASANOVA                                                  "
"CALCULO NUMERICO              "	"MARCOS SALVADOR                                                       "	"AILTON CASTRO                                                         "
"CALCULO NUMERICO              "	"MARCOS SALVADOR                                                       "	"EDVALDO CARLOS SILVA                                                  "
"CALCULO NUMERICO              "	"MARCOS SALVADOR                                                       "	"JOAO BENEDITO SCAPIN                                                  "
"CALCULO NUMERICO              "	"MARCOS SALVADOR                                                       "	"MARCOS JOAO CASANOVA                                                  "
"DIREITO PENAL                 "	"RAMON TRAVANTI                                                        "	"SIMONE CRISTINA LIMA                                                  "
"DIREITO TRIBUTARIO            "	"RAMON TRAVANTI                                                        "	"SIMONE CRISTINA LIMA                                                  "
"ENGENHARIA DE SOFTWARE        "	"CINTIA FALCAO                                                         "	"AILTON CASTRO                                                         "
"ENGENHARIA DE SOFTWARE        "	"CINTIA FALCAO                                                         "	"EDVALDO CARLOS SILVA                                                  "
"ENGENHARIA DE SOFTWARE        "	"CINTIA FALCAO                                                         "	"JOAO BENEDITO SCAPIN                                                  "
"ENGENHARIA DE SOFTWARE        "	"CINTIA FALCAO                                                         "	"MARCOS JOAO CASANOVA                                                  "
"ESTRUTURA DE DADOS            "	"ABGAIR SIMON FERREIRA                                                 "	"EDVALDO CARLOS SILVA                                                  "
"ESTRUTURA DE DADOS            "	"ABGAIR SIMON FERREIRA                                                 "	"MARCOS JOAO CASANOVA                                                  "
"PSICOLOGIA INFANTIL           "	"GUSTAVO GOLVEIA NETTO                                                 "	"CAROL ANTONIA SILVEIRA                                                "

M)  SELECT Aluno.Nome, Disciplina.Nome, Aula.Nota
FROM Aluno, Disciplina, Aula, Curso, DisciplinaCurso
WHERE Aula.Semestre = '01/1998'
	AND Curso.Nome = 'CIENCIA DA COMPUTACAO'
    AND Aula.NumAluno = Aluno.NumAluno
    AND Aula.NumDisp = Disciplina.NumDisp
    AND DisciplinaCurso.NumDisp = Disciplina.NumDisp
    AND DisciplinaCurso.NumCurso = Curso.NumCurso

"MARCOS JOAO CASANOVA                                                  "	"BANCO DE DADOS                "	7.00
"EDVALDO CARLOS SILVA                                                  "	"BANCO DE DADOS                "	8.50
"MARCOS JOAO CASANOVA                                                  "	"ESTRUTURA DE DADOS            "	8.00
"EDVALDO CARLOS SILVA                                                  "	"ESTRUTURA DE DADOS            "	6.00
"AILTON CASTRO                                                         "	"CALCULO NUMERICO              "	3.50
"MARCOS JOAO CASANOVA                                                  "	"CALCULO NUMERICO              "	6.50
"JOAO BENEDITO SCAPIN                                                  "	"CALCULO NUMERICO              "	7.00
"EDVALDO CARLOS SILVA                                                  "	"CALCULO NUMERICO              "	8.00
"AILTON CASTRO                                                         "	"ENGENHARIA DE SOFTWARE        "	8.50
"MARCOS JOAO CASANOVA                                                  "	"ENGENHARIA DE SOFTWARE        "	9.50
"JOAO BENEDITO SCAPIN                                                  "	"ENGENHARIA DE SOFTWARE        "	5.50
"EDVALDO CARLOS SILVA                                                  "	"ENGENHARIA DE SOFTWARE        "	10.00

Caike Cesar Mota de Araújo - 12221bcc030

a)
SELECT MIN(Aula.nota) AS Menor, MAX(Aula.nota) AS Maior
FROM Aula
WHERE NumDisp = (
SELECT NumDisp
FROM Disciplina
WHERE Nome = 'CALCULO NUMERICO'
)
AND Semestre = '01/1998'

3.50	8.00

b) SELECT Aluno.Nome, MAX(Aula.nota) AS MaiorNota
FROM Aluno
INNER JOIN Aula ON Aluno.NumAluno = Aula.NumAluno
WHERE Aula.NumDisp = (
SELECT NumDisp
FROM Disciplina
WHERE Nome = 'ENGENHARIA DE SOFTWARE'
)
AND Aula.Semestre = '01/1998'
GROUP BY Aluno.nome

"AILTON CASTRO                                                         "	8.50
"EDVALDO CARLOS SILVA                                                  "	10.00
"JOAO BENEDITO SCAPIN                                                  "	5.50
"MARCOS JOAO CASANOVA                                                  "	9.50

c) SELECT Professor.Nome, AVG(Aula.nota) AS MediaNota
FROM Professor
INNER JOIN Aula ON Professor.NumFunc = Aula.NumFunc
WHERE Professor.Nome = 'MARCOS SALVADOR'
GROUP BY Professor.nome

"MARCOS SALVADOR                                                       "	7.1666666666666667

d) SELECT A.Nome AS NomeAluno, D.Nome AS NomeDisciplina, AU.Nota
FROM Aula AU
JOIN Aluno A ON AU.NumAluno = A.NumAluno
JOIN Disciplina D ON AU.NumDisp = D.NumDisp
WHERE AU.Nota BETWEEN 5.0 AND 7.0
ORDER BY D.Nome DESC;

"EDVALDO CARLOS SILVA                                                  "	"ESTRUTURA DE DADOS            "	6.00
"EDVALDO CARLOS SILVA                                                  "	"ESTRUTURA DE DADOS            "	7.00
"JOAO BENEDITO SCAPIN                                                  "	"ENGENHARIA DE SOFTWARE        "	5.50
"MARCOS JOAO CASANOVA                                                  "	"CALCULO NUMERICO              "	6.50
"JOAO BENEDITO SCAPIN                                                  "	"CALCULO NUMERICO              "	7.00
"MARCOS JOAO CASANOVA                                                  "	"BANCO DE DADOS                "	7.00

e) SELECT Professor.Nome, COUNT(Aula.NumFunc)
FROM Aula 
JOIN Professor ON Aula.NumFunc = Professor.NumFunc
WHERE Professor.Nome LIKE 'ABGAIR %'
AND Aula.Semestre = '01/1998'
GROUP BY Professor.nome

"ABGAIR SIMON FERREIRA                                                 "	4

F) SELECT AVG(Aula.Nota), 	COUNT (Aula.NumAluno)
FROM Aula
JOIN Aluno ON Aula.NumAluno = Aluno.NumAluno
WHERE Aluno.Nome = 'EDVALDO CARLOS SILVA'

7.9000000000000000	5

G) SELECT Disciplina.Nome, AVG(Aula.Nota) AS MediaNota
FROM Aula
JOIN Disciplina ON Aula.NumDisp = Disciplina.NumDisp
WHERE Aula.Semestre = '01/1998'
GROUP BY Disciplina.Nome
ORDER BY Disciplina.Nome DESC;

"PSICOLOGIA INFANTIL           "	7.5000000000000000
"ESTRUTURA DE DADOS            "	7.0000000000000000
"ENGENHARIA DE SOFTWARE        "	8.3750000000000000
"DIREITO TRIBUTARIO            "	9.0000000000000000
"DIREITO PENAL                 "	4.5000000000000000
"CALCULO NUMERICO              "	6.2500000000000000
"BANCO DE DADOS                "	7.7500000000000000

H) SELECT Professor.Nome, AVG(Aula.Nota)
FROM Aula
JOIN Professor ON Aula.NumFunc = Professor.NumFunc
WHERE Aula.Semestre = '01/1998'
GROUP BY Professor.Nome

"ABGAIR SIMON FERREIRA                                                 "	7.3750000000000000
"CINTIA FALCAO                                                         "	8.3750000000000000
"GUSTAVO GOLVEIA NETTO                                                 "	7.5000000000000000
"MARCOS SALVADOR                                                       "	6.2500000000000000
"RAMON TRAVANTI                                                        "	6.7500000000000000

I) SELECT Disciplina.Nome, AVG(Aula.Nota)
FROM Aula
JOIN Disciplina ON Aula.NumDisp = Disciplina.NumDisp
JOIN DisciplinaCurso ON DisciplinaCurso.NumDisp = Disciplina.NumDisp
JOIN Curso ON DisciplinaCurso.NumCurso = Curso.NumCurso
WHERE Curso.Nome = 'CIENCIA DA COMPUTACAO'
AND Aula.Semestre = '01/1998'
GROUP BY Disciplina.Nome

"BANCO DE DADOS                "	7.7500000000000000
"CALCULO NUMERICO              "	6.2500000000000000
"ENGENHARIA DE SOFTWARE        "	8.3750000000000000
"ESTRUTURA DE DADOS            "	7.000000000000000

J) SELECT SUM(Disciplina.QuantCreditos)
FROM Aula
JOIN Disciplina ON Aula.NumDisp = Disciplina.NumDisp
JOIN Aluno ON Aula.NumAluno = Aluno.NumAluno
WHERE Aluno.Nome = 'EDVALDO CARLOS SILVA'
AND Aula.Nota >= 6.0

147

K) SELECT Aluno.Nome, SUM(Disciplina.QuantCreditos)
FROM Aula
JOIN Aluno ON Aula.NumAluno = Aluno.NumAluno
JOIN Disciplina ON Aula.NumDisp = Disciplina.NumDisp
WHERE Aula.Nota >= 6.0
GROUP BY Aluno.Nome
HAVING SUM(Disciplina.QuantCreditos) >= 70

"EDVALDO CARLOS SILVA                                                  "	147
"MARCOS JOAO CASANOVA                                                  "	147

L) SELECT Aluno.Nome AS Aluno, Disciplina.Nome AS Disciplina, Professor.Nome AS Professor
FROM Aula
JOIN Aluno ON Aula.NumAluno = Aluno.NumAluno
JOIN Disciplina ON Aula.NumDisp = Disciplina.NumDisp
JOIN DisciplinaCurso ON Disciplina.NumDisp = DisciplinaCurso.NumDisp
JOIN Curso ON DisciplinaCurso.NumCurso = Curso.NumCurso
JOIN Professor ON Aula.NumFunc = Professor.NumFunc
WHERE Curso.Nome = 'CIENCIA DA COMPUTACAO'
AND Aula.Nota >= 8.0
AND Aula.Semestre = '01/1998'
GROUP BY Aluno.Nome, Disciplina.Nome, Professor.Nome

"AILTON CASTRO                                                         "	"ENGENHARIA DE SOFTWARE        "	"CINTIA FALCAO                                                         "
"EDVALDO CARLOS SILVA                                                  "	"BANCO DE DADOS                "	"ABGAIR SIMON FERREIRA                                                 "
"EDVALDO CARLOS SILVA                                                  "	"CALCULO NUMERICO              "	"MARCOS SALVADOR                                                       "
"EDVALDO CARLOS SILVA                                                  "	"ENGENHARIA DE SOFTWARE        "	"CINTIA FALCAO                                                         "
"MARCOS JOAO CASANOVA                                                  "	"ENGENHARIA DE SOFTWARE        "	"CINTIA FALCAO                                                         "
"MARCOS JOAO CASANOVA                                                  "	"ESTRUTURA DE DADOS            "	"ABGAIR SIMON FERREIRA                                                 "

Felipe Santos Silva - 12221bcc042	
Caike Cesar Mota de Araújo - 12221bcc030

2 - a)

CREATE TABLE auditoria_salarios (
    cod_vend INT,
    salario_anterior NUMERIC(10,2),
    novo_salario NUMERIC(10,2),
    data_alteracao TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TRIGGER fn_auditoria_salario
AFTER UPDATE OF salfixo ON vendedor
FOR EACH ROW 
EXECUTE PROCEDURE fn_auditoria_salario()


CREATE OR REPLACE FUNCTION fn_auditoria_salario()
RETURNS TRIGGER AS $$ BEGIN
        INSERT INTO auditoria_salarios (cod_vend, salario_anterior, novo_salario)
        VALUES (OLD.codvend, OLD.salfixo, NEW.salfixo);
    	RETURN NULL;
END $$ language 'plpgsql';

SELECT * FROM auditoria_salarios

UPDATE vendedor
SET salfixo = 15000
WHERE codvend = 720

CREATE OR REPLACE PROCEDURE AumentaSalarios()
LANGUAGE plpgsql
AS $$
BEGIN
    UPDATE vendedor
    SET salfixo = CASE
        WHEN faixacomis = 'A' THEN salfixo * 1.05 
        WHEN faixacomis = 'B' THEN salfixo * 1.10 
        ELSE salfixo * 1.15 
    END;
END;
$$;

SELECT * FROM vendedor

11	"JOAO SANTOS OLIVEIRA"	"3196.9999999999995"	"C"
101	"JOAO SANTOS SILVA"	"3047.4999999999995"	"C"
111	"CARLOS VIEIRA"	"2614.5"	"A"
209	"JOSE FELISBERTO"	"2070"	"C"
213	"JONAS SILVA"	"2415"	"A"
240	"ANTONIO MORAIS"	"10925"	"C"
250	"MAURICIO SERRA"	"3223.0000000000005"	"B"
310	"JOSIAS DA SILVA"	"957.0000000000001"	"B"
100	"MARCOS FARIAS"	"919.9999999999999"	"D"
200	"MONICA DA SILVA"	"1839.9999999999998"	"D"
280	"SAMANTA DE OLIVEIRA"	"4140"	"C"
720	"FELIPE NASCIMENTO"	"15750"	"A"

CALL AumentaSalarios();

SELECT * FROM vendedor

11	"3197.00"	"3676.55"	"2025-04-04 16:36:06.878548"
101	"3047.50"	"3504.63"	"2025-04-04 16:36:06.878548"
111	"2614.50"	"2745.23"	"2025-04-04 16:36:06.878548"
209	"2070.00"	"2380.50"	"2025-04-04 16:36:06.878548"
213	"2415.00"	"2535.75"	"2025-04-04 16:36:06.878548"
240	"10925.00"	"12563.75"	"2025-04-04 16:36:06.878548"
250	"3223.00"	"3545.30"	"2025-04-04 16:36:06.878548"
310	"957.00"	"1052.70"	"2025-04-04 16:36:06.878548"
100	"920.00"	"1058.00"	"2025-04-04 16:36:06.878548"
200	"1840.00"	"2116.00"	"2025-04-04 16:36:06.878548"
280	"4140.00"	"4761.00"	"2025-04-04 16:36:06.878548"
720	"15750.00"	"16537.50"	"2025-04-04 16:36:06.878548"

SELECT * FROM auditoria_salarios

11	"3197.00"	"3676.55"	"2025-04-04 16:36:06.878548"
101	"3047.50"	"3504.63"	"2025-04-04 16:36:06.878548"
111	"2614.50"	"2745.23"	"2025-04-04 16:36:06.878548"
209	"2070.00"	"2380.50"	"2025-04-04 16:36:06.878548"
213	"2415.00"	"2535.75"	"2025-04-04 16:36:06.878548"
240	"10925.00"	"12563.75"	"2025-04-04 16:36:06.878548"
250	"3223.00"	"3545.30"	"2025-04-04 16:36:06.878548"
310	"957.00"	"1052.70"	"2025-04-04 16:36:06.878548"
100	"920.00"	"1058.00"	"2025-04-04 16:36:06.878548"
200	"1840.00"	"2116.00"	"2025-04-04 16:36:06.878548"
280	"4140.00"	"4761.00"	"2025-04-04 16:36:06.878548"
720	"15750.00"	"16537.50"	"2025-04-04 16:36:06.878548"

2 - B)

ALTER TABLE pedido ADD COLUMN qtd_itens INT DEFAULT 0;

CREATE OR REPLACE PROCEDURE atualizar_qtd_itens()
LANGUAGE plpgsql
AS $$
BEGIN
    UPDATE pedido
    SET qtd_itens = (
        SELECT COUNT(*) FROM itempedido i
        WHERE i.numped = pedido.numped
    );
END;
$$;

SELECT * FROM itemped WHERE numped = 300;

300	22	229
300	25	295
300	31	146
300	45	223
300	53	109
300	77	168

SELECT * FROM pedido

300	20	180	720	0

CALL atualizar_qtd_itens()

DELETE FROM itemped 
WHERE itemped.codprod = 25

INSERT INTO itemped VALUES (300, 2, 2);

 
SELECT * FROM produto 
SELECT * FROM itemped WHERE numped = 300;
SELECT * FROM pedido WHERE numped = 300;

c)

CREATE OR REPLACE FUNCTION func_validar_max_itens()
RETURNS TRIGGER AS $$
DECLARE
    v_total INTEGER;
BEGIN
    SELECT COUNT(*) INTO v_total
    FROM ITEMPEDIDO
    WHERE NumPed = NEW.NumPed;

    IF (TG_OP = 'UPDATE') THEN
        v_total := v_total - 1;
    END IF;

    IF (v_total + 1 > 10) THEN
        RAISE EXCEPTION 'Um pedido não pode conter mais que 10 itens!';
    END IF;
    
    RETURN NEW;
END;
$$ LANGUAGE plpgsql;

CREATE TRIGGER trig_validar_max_itens
BEFORE INSERT OR UPDATE ON ITEMPEDIDO
FOR EACH ROW
EXECUTE FUNCTION func_validar_max_itens();

INSERT INTO PEDIDO (NumPed, PrazoEntr, CodCli, CodVend)
VALUES (8888, CURRENT_DATE + 5, 1, 1);

DO $$
DECLARE
    i INTEGER;
BEGIN
    FOR i IN 1..11 LOOP
        BEGIN
            INSERT INTO ITEMPEDIDO (NumPed, CodProd, Quant)
            VALUES (8888, (i % 5) + 1, 1);
            RAISE NOTICE 'Item % inserido com sucesso', i;
        EXCEPTION WHEN OTHERS THEN
            RAISE NOTICE 'Erro ao inserir item %: %', i, SQLERRM;
        END;
    END LOOP;
END $$;

SELECT COUNT(*) FROM ITEMPEDIDO WHERE NumPed = 8888;
