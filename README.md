# LabICC2 - Trabalho 01 - Potência

  O intuito da atividade é comparar as implementações recursiva e iterativa da operação de potenciação na linguagem C, e seus respectivos custos operacionais por meio do tempo de execução.

  As orientações consistem na implementação da operação de potenciação a partir de dois números inteiros n (0 < n ≤ 99) e k (0 < n ≤ 10^9). A saída do programa deve corresponder à operação n^k. Para evitar estouro de valor de variável, a saída deve conter apenas três dígitos (ocultando-se os zeros à esquerda).

## Implementação Iterativa

![image](https://user-images.githubusercontent.com/106783009/191133682-387c5718-6be5-4670-933a-a8d3a88fd2c2.png)

  Para solucionar o estouro de variável, a cada laço de n * n * ... * n, é extraído o módulo do resultado obtido por 1000, extraindo assim os últimos 3 dígitos do número. Decompondo um número qualquer para o somatório da múltiplicação de cada um de seus algarismos pela respectiva potência de 10 correspondente à sua posição, é fácil verificar que essa operação de módulo afeta apenas o valor dos algarismos à esquerda dos 3 primeiros, que são irrelevantes no caso do exercício. Além disso, mesmo não sendo necessário calcular o módulo a cada iteração, o custo operacional de se testar essa necessidade a cada iteração seria semelhante ou maior.
  
## Implementação Recursiva

![image](https://user-images.githubusercontent.com/106783009/191134629-151001d6-57d7-4fc1-a432-5cf030611dc0.png)

  Para solucionar o estouro de variável, para cada retorno da função recursivePow, é extraído o módulo do resultado obtido por 1000, extraindo assim os últimos 3 dígitos do número. Decompondo um número qualquer para o somatório da múltiplicação de cada um de seus algarismos pela respectiva potência de 10 correspondente à sua posição, é fácil verificar que essa operação de módulo afeta apenas o valor dos algarismos à esquerda dos 3 primeiros, que são irrelevantes no caso do exercício. Além disso, mesmo não sendo necessário calcular o módulo a cada iteração, o custo operacional de se testar essa necessidade a cada iteração seria semelhante ou maior.
  
## Casos de teste

| Casos            | #1    | #2       | #3        | #4         | #5            |
| ---------------- | ----- | -------- | --------- | ---------- | ------------- |
| Entrada Esperada | 2 10  | 99 75301 | 37 543210 | 27 6543101 | 52 1000000000 |
| Saída Esperada   | 24    | 99       | 849       | 27         | 376           |
