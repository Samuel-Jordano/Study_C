using System;
class Banco {
  static void Main() {
    
    //criando conta
    ContaBancaria conta = new ContaBancaria();
    
    Console.WriteLine("Número da Conta: " + conta.NumeroConta);
    Console.WriteLine("Digite o nome do Titular: ");
    conta.TitularConta = Console.ReadLine();
    Console.WriteLine("Nome do Titular: " + conta.TitularConta);
    Console.WriteLine("Saldo da conta: " + conta.ExibirSaldo());
    
    conta.Sacar(500);
    
    Console.WriteLine("Nome do Titular: " + conta.TitularConta);
    Console.WriteLine("Novo Saldo: " + conta.ExibirSaldo());
    
    conta.Depositar(3000);
    
    Console.WriteLine("Deposito feito com sucesso!");
    Console.WriteLine("Novo Saldo: " + conta.ExibirSaldo());
    
  }
}

public class ContaBancaria{
    
    //ATRIBUTOS
    
    public string NumeroConta = "000102";
    public string TitularConta = "";
    private double saldo = 3000.50;
    
    public void Sacar(float valor){
        if(this.saldo >= valor){
            this.saldo -= valor;
        }else{
            Console.WriteLine("Saldo Insulficiente");
        }
    }
    
    public void Depositar(float valor){
        this.saldo += valor;
    }
    
    public double ExibirSaldo(){
        return this.saldo;
    }
}
