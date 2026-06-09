# Questão Extra — Luan e as Barracas da UESPI

Durante a semana de revisão na UESPI, Luan resolveu ajudar na organização das barracas de lanche espalhadas pelo campus.

O problema é que os alunos não circulam igualmente por todas as barracas. Algumas ficam em pontos estratégicos, perto das salas, corredores movimentados e aquele corredor onde sempre aparece alguém dizendo:

> "Vou só comprar uma água rapidinho."

Outras barracas ficam em regiões tão esquecidas que até o Wi-Fi parece pedir transferência de bloco.

Para melhorar as vendas, Luan recebeu um relatório com várias previsões de movimento. Cada previsão indica um intervalo de barracas que será visitado pelos alunos em determinado momento.

Existem `n` barracas, numeradas de `1` até `n`. Cada barraca possui inicialmente uma quantidade de lanches.

Antes da semana começar, Luan pode reorganizar livremente as quantidades de lanches entre as barracas. Ou seja, ele pode trocar os valores entre as posições do vetor.

Depois disso, cada previsão `[l, r]` representa que todas as barracas de `l` até `r` serão visitadas uma vez, e os lanches dessas barracas serão contabilizados na soma total de vendas previstas.

Ajude Luan a descobrir qual é a maior soma total possível de lanches vendidos, considerando que ele pode reorganizar as quantidades antes das previsões acontecerem.

## Entrada

A primeira linha contém dois inteiros `n` e `q`, representando, respectivamente, a quantidade de barracas e a quantidade de previsões de movimento.

A segunda linha contém `n` inteiros `a1, a2, ..., an`, onde `ai` representa a quantidade inicial de lanches na barraca `i`.

As próximas `q` linhas contêm dois inteiros `l` e `r`, indicando que as barracas no intervalo de `l` até `r` serão visitadas naquela previsão.

## Saída

Imprima um único inteiro: a maior soma total possível de lanches vendidos após Luan reorganizar as quantidades entre as barracas.

## Restrições

- `1 ≤ n, q ≤ 100000`
- `1 ≤ ai ≤ 100000`
- `1 ≤ l ≤ r ≤ n`

## Caso de teste 1

### Entrada

```txt
3 3
5 3 2
1 2
2 3
1 3
```

### Saída

```
25
```

## Caso de teste 2

### Entrada

```
5 4
10 1 7 3 5
1 3
2 5
2 4
4 5
```

### Saída

```
67
```

## Caso de teste 3

### Entrada

```
4 2
8 6 2 10
1 4
2 3
```

### Saída

```
44
```

## Caso de teste 4

### Entrada

```
6 5
4 9 1 6 3 8
1 2
2 5
3 6
1 6
4 4
```

### Saída

```
86
```

## Caso de teste 5

### Entrada

```
1 3
100
1 1
1 1
1 1
```

### Saída

```
300
```
