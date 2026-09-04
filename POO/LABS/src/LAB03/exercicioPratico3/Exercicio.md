# Exercicio

>🧠 Pílula de Conhecimento B: Identificadores Únicos (UUID)
>
>Em aplicações web e sistemas distribuídos, não usamos IDs simples (1, 2, 3) para evitar que invasores descubram o próximo item da lista. Usamos o UUID (Universally Unique Identifier).
>
>Como usar:
>
>import java.util.UUID;
>
>String codigoUnico = UUID.randomUUID().toString();
>// Resultado: "550e8400-e29b-41d4-a716-446655440000"

## Questão 3: Perfil de Streaming

Uma plataforma de streaming está implementando um sistema de perfis de usuários, onde cada pessoa pode ter sua própria conta com restrições de conteúdo baseadas na idade.

Para garantir segurança e controle parental, algumas regras precisam ser aplicadas automaticamente pelo sistema, sem depender da ação do usuário.

Atributos Privados: idPerfil (String), nome (String), idade (int) e restricaoAtiva (boolean).

**Construtor:**

Deve receber nome e idade.
O idPerfil deve ser gerado automaticamente no construtor usando UUID.
Lógica de Estado Derivado:

O atributo restricaoAtiva não deve ter Setter.

A lógica de restrição é: se a idade for menor que 18, restricaoAtiva deve ser automaticamente true. Caso contrário, false.

Atenção: Garanta que essa lógica funcione tanto na criação (construtor) quanto em qualquer alteração de idade (Setter).

Regra: O nome do perfil não pode ser alterado se a idade for menor que 12 anos (bloqueio de segurança infantil). Exiba uma mensagem de erro caso tentem alterar.
