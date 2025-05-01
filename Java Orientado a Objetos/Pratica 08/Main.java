package estudosp3;

public class Main {
    public static void main(String[] args) {
        GestaoContatos dados = new GestaoContatos();

        Contato maria = new Contato("Maria", 30, 'F', "Engenheira", "123456789", "maria@example.com");
        Contato joao = new Contato("João", 25, 'M', "Programador", "987654321", "joao@example.com");
        Contato ana = new Contato("Ana", 35, 'F', "Médica", "111222333", "ana@example.com");
        
        dados.adicionaContato(maria);
        dados.adicionaContato(joao);
        dados.adicionaContato(ana);

        // Lista todos os contatos
        System.out.println("Lista de Contatos:");
        dados.listaContatos();

        // Remove um contato
        dados.eliminaContato("João");

        // Lista os contatos novamente
        System.out.println("\nLista de Contatos após a remoção:");
        dados.listaContatos();

        // Encontra o contato mais velho
        Contato maisVelho = dados.maisVelho();
        if (maisVelho != null) {
            System.out.println("\nContato mais velho:");
            System.out.println(maisVelho);
        } else {
            System.out.println("\nNão há contatos para encontrar o mais velho.");
        }

        // Encontra o contato menos velho
        Contato menosVelho = dados.maisNovo();
        if (menosVelho != null) {
            System.out.println("\nContato mais novo:");
            System.out.println(menosVelho);
        } else {
            System.out.println("\nNão há contatos para encontrar o menos velho.");
        }
    }
}
