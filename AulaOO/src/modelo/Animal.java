package modelo;

public class Animal {
	//Atributo Variaveis globais / caracteristicas
	
		public String nome;
		public String raca;
		public Double peso;
		public Double comprimento;
		
		//Metodos (comportamentos ou ações)
		//Acordar, comer, Locomover, dormir
		
		public void acordar() {
			System.out.println("Acordar");
			
		}
		
		public void comer() {
			System.out.println("Comeu");
		}
		
		public void locomover() {
			System.out.println("Andou");
		}
		
		public void dormir() {
			System.out.println("Dormiu");
		}

}
