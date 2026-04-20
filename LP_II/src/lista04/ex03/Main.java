package lista04.ex03;

import lista04.ex03.model.*;

public class Main {
    public static void main(String[] args) {

        Plano[] planos = new Plano[5];

        planos[0] = new PlanoBasico("Carlos Silva", 50.00);
        planos[1] = new PlanoEstudante("Ana Souza", 50.00);
        planos[2] = new PlanoPremium("Roberto Lima", 50.00);
        planos[3] = new PlanoFamiliar("Família Oliveira", 50.00, 4);
        planos[4] = new PlanoEmpresarial("Empresa Tech Ltda", 50.00, 12);

        for (Plano plano : planos) {
            plano.exibirPlano();
        }
    }
}

