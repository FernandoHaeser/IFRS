/*

Controle de Registro Acadêmico

Crie uma classe Aluno que represente um estudante do curso de Sistemas para Internet.
A classe deve ter os atributos nome, matricula e notaSemestre.
Adicione um método chamado verificarAprovacao() que retorne "Aprovado" se a nota for maior ou igual a 7.0 e "Em Exame"
caso contrário.

Dica: Utilize uma estrutura if/else dentro do método.

 */

package lista02.registroacademico;

public class Aluno {

    String nome;
    long matricula;
    double notaSemestre;

    boolean verificarAprovacao(double notaSemestre) {
        return notaSemestre >= 7;
    }
}
