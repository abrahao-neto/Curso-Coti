package execucao;
import modelo.*;


public class Principal2 {
	public static void main(String[] args) {
		
		//Cachorro -> Referencia (tipo de dado)
		//c -> Instancia (variavel) de mainpulacao do objeto
		//new -> alocacao de memoria
		//Cachoro() - Metodo construtor (cria objeto)
		Cachorro c = new Cachorro();
		
		c.nome = "Paçoca";
		c.raca = "Viralata";
		c.peso = 20.0;
		c.comprimento = 60.0;
		
		System.out.println("Nome: " + c.nome);
		System.out.println("Raça: " + c.raca);
		System.out.println("Peso: " + c.peso);
		System.out.println("Comprimento: " + c.comprimento);
		
		System.out.println("\nCACHORRO");
		c.acordar();
		c.comer();
		c.locomover();
		c.cavar(); // Metodo especifico para cachorro
		c.dormir();
		
		// Acessando a classe gato
		Gato g = new Gato();
		
		System.out.println("\nGATO");
		g.miar();
		g.acordar();
		g.comer();
		g.locomover();
		g.dormir();
		
		System.out.println("\nPeixe");
		
		Peixe p = new Peixe();
		p.comer();
		p.acordar();
		p.dormir();
		p.locomover();
	}
	
	

}
