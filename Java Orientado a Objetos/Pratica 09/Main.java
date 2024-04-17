package estudosp3;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        AparelhoEletronico[] aparelhos = new AparelhoEletronico[10];

        for (int i = 0; i < aparelhos.length; i++) {
            try {
                System.out.println("Criando aparelho número " + (i + 1));

                System.out.print("Fabricante: ");
                String fabricante = scanner.nextLine();

                System.out.print("Sistema de cor (NTSC ou PALM): ");
                String sistemaCor = scanner.nextLine();

                System.out.print("Preço: ");
                double preco = Double.parseDouble(scanner.nextLine());

                System.out.print("Região (1 a 4): ");
                int regiao = Integer.parseInt(scanner.nextLine());

                System.out.print("Reproduz MP3 (true/false): ");
                boolean reproduzMP3 = Boolean.parseBoolean(scanner.nextLine());

                // Escolha entre criar um DVD ou uma televisão
                System.out.print("Tipo de aparelho (DVD ou Televisao): ");
                String tipoAparelho = scanner.nextLine();

                if (tipoAparelho.equalsIgnoreCase("DVD")) {
                    aparelhos[i] = new DVD(fabricante, sistemaCor, preco, regiao, reproduzMP3);
                } 
                else if (tipoAparelho.equalsIgnoreCase("Televisao")) {
                	
                    System.out.print("Quantidade de polegadas: ");
                    int quantidadePolegadas = Integer.parseInt(scanner.nextLine());
                    
                    System.out.print("Tela plana (true/false): ");
                    boolean telaPlana = Boolean.parseBoolean(scanner.nextLine());
                    
                    aparelhos[i] = new Televisao(fabricante, sistemaCor, preco, quantidadePolegadas, telaPlana);
                } 
                else {
                    System.out.println("Tipo de aparelho inválido.");
                }
            } catch (NumberFormatException e) {
                System.out.println("Erro de formato: " + e.getMessage());
            } catch (ExcecaoDadoInvalido e) {
                System.out.println("Erro de dado inválido: " + e.getMessage());
            }
        }

        // Imprime os aparelhos criados
        System.out.println("\nAparelhos criados:");
        for (AparelhoEletronico aparelho : aparelhos) {
            if (aparelho != null) {
                System.out.println(aparelho);
            }
        }

        scanner.close();
    }
}
