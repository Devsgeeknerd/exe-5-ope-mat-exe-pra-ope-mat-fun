<!-- Título -->
# Exercício 5 — Operadores Matemáticos

***Conteúdo do Exercício:***

Crie um algoritmo que leia o **salário mensal** atual de um funcionário e o **percentual de reajuste** que ele receberá. O programa deve calcular e exibir o novo salário, após o reajuste.

1. Solicite ao usuário o valor do salário mensal atual.
2. Solicite ao usuário o percentual de reajuste.
3. Calcule o valor do reajuste, multiplicando o salário pelo percentual (dividido por 100).
4. Some o valor do reajuste ao salário atual.
5. Exiba o novo salário.

[Resposta.](main.c)

> [!IMPORTANT]\
> **Boas práticas**:
>
> * **Nome de variáveis claro**:
>   * As variáveis `salario`, `reajuste` e `novoSalario` têm nomes que são intuitivos e explicam claramente o que elas representam, o que facilita o entendimento do código.
>
> * **Usar `printf` e `scanf` corretamente**:
>   * O uso das funções `printf` e `scanf` está correto, mas sempre é importante verificar se o usuário insere valores válidos.
>   * Embora isso não seja uma prática essencial aqui, pode ser uma melhoria futura.

> [!WARNING]\
> **Sugestões de melhoria**:
>
> * **Validar entradas do usuário**:
>   * Uma sugestão de melhoria seria garantir que o valor informado pelo usuário para o salário e o percentual seja válido.
>   * Você poderia adicionar verificações para garantir que o salário seja positivo e o percentual esteja dentro de um intervalo razoável (ex: entre 0 e 1000%).
>
> * **Retornar tipo `int` em vez de `void` na função `main`**:
>   * A convenção em C é usar `int main()` em vez de `void main()`, e retornar `0` no final para indicar que o programa foi executado com sucesso.
>
> * **Adicionar mensagens de erro**:
>   * Caso o usuário insira valores inválidos, você pode adicionar mensagens de erro para melhorar a experiência do usuário.

> [!NOTE]\
> **Observações**:
>

<!-- Informações -->
## &#8505; Informações

![Visitors](https://api.visitorbadge.io/api/visitors?path=Devsgeeknerd%2Fexe-5-ope-mat-exe-pra-ope-mat-fun&label=Visitantes&labelColor=%23700070&labelStyle=none&countColor=%23000fff&style=plastic&color=%23ffffff "Total de Visitantes")
&nbsp;
![Followers](https://img.shields.io/github/followers/Devsgeeknerd?style=p&label=Seguidores&labelColor=800080&color=000fff "Total de Seguidores")
&nbsp;
![Watchers](https://img.shields.io/github/watchers/Devsgeeknerd/exe-5-ope-mat-exe-pra-ope-mat-fun?style=p&label=Observadores&labelColor=800080&color=000fff "Total de Observadores")
&nbsp;
![Stars](https://img.shields.io/github/stars/Devsgeeknerd/exe-5-ope-mat-exe-pra-ope-mat-fun?style=p&label=Estrelas&labelColor=800080&color=000fff "Total de Estrelas")
&nbsp;
![Forks](https://img.shields.io/github/forks/Devsgeeknerd/exe-5-ope-mat-exe-pra-ope-mat-fun?style=p&label=Bifurcações&labelColor=800080&color=000fff "Total de Bifurcações")
&nbsp;
![Repo Size](https://img.shields.io/github/repo-size/Devsgeeknerd/exe-5-ope-mat-exe-pra-ope-mat-fun?style=p&label=Tamanho&labelColor=800080&color=000fff "Tamanho do Repositório")
&nbsp;
![License](https://img.shields.io/github/license/Devsgeeknerd/exe-5-ope-mat-exe-pra-ope-mat-fun?style=p&label=Licença&labelColor=800080&color=000fff "Licença do Repositório")
