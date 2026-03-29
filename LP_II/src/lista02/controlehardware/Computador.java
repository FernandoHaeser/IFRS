/*


Controle de Hardware

Considerando os computadores de um laboratório, crie uma classe Computador com os atributos marca, processador e estaLigado (boolean).
Adicione métodos para ligar() e desligar(), que alteram o estado do atributo booleano.
Adicione um método verificarStatus() que imprima se o computador está pronto para uso ou desligado.

*/

package lista02.controlehardware;

public class Computador {

    String marca, processador;
    boolean estaLigado;

    boolean ligar() {
        estaLigado = true;
        return true;
    }

    boolean desligar() {
        estaLigado = false;
        return false;
    }

    void verificarEstado(boolean estadoComputador) {
        System.out.println("O computador " + marca + " com o processador " + processador
                + (estaLigado ? " está pronto para uso!" : " não está pronto para uso!"));
    }
}
