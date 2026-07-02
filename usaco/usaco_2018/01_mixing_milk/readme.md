# 🥛 Mixing Milk (Misturando Leite)
**Créditos:** Brian Dean (USACO December 2018 Bronze Problem 1)
**Categoria:** Simulação 
https://usaco.org/index.php?page=viewproblem2&cpid=855

## 📝 Descrição do Problema

A agricultura é um negócio competitivo, especialmente a produção de leite. O fazendeiro John acredita que, se não inovar em seus métodos de produção de leite, seu negócio de laticínios pode ir por água abaixo!

Felizmente, o Fazendeiro John teve uma ótima ideia. Suas três vacas leiteiras premiadas, Bessie, Elsie e Mildred, produzem leite com sabores ligeiramente diferentes, e ele planeja misturá-los para obter a combinação perfeita de sabores.

Para misturar os três tipos de leite, ele pega três baldes contendo leite de três vacas diferentes. Os baldes podem ter tamanhos diferentes e podem não estar completamente cheios. Ele então despeja o leite do balde 1 no balde 2, depois o leite do balde 2 no balde 3, depois o leite do balde 3 no balde 1, depois o leite do balde 1 no balde 2 e assim por diante, em um ciclo, totalizando **100 operações de despejo** (portanto, o 100º despejo seria do balde 1 para o balde 2). 

Quando o Fazendeiro John despeja o leite do balde `a` dentro do balde `b`, ele despeja o máximo de leite possível até que o balde `a` fique vazio ou o balde `b` fique cheio.

Por favor, informe ao Fazendeiro John quanto leite haverá em cada balde depois que ele terminar de despejar os leites 100 vezes.

## 📥 Formato de Entrada (`mixmilk.in`)

* A **primeira linha** do arquivo de entrada contém dois números inteiros separados por espaço: a capacidade `c1` do primeiro balde e a quantidade de leite `m1` no primeiro balde. Ambos `c1` e `m1` são positivos e no máximo 1 bilhão, com `c1 ≥ m1`.
* A **segunda** e a **terceira** linhas são semelhantes, contendo as capacidades e as quantidades de leite para o segundo e o terceiro baldes, respectivamente.

## 📤 Formato de Saída (`mixmilk.out`)

Imprima três linhas de saída, indicando a quantidade final de leite em cada balde após 100 operações de despejo.

## 📊 Exemplo

**Entrada:**
```text
10 3 
11 4 
12 5
Saída:
0 
10 
2
Explicação do Exemplo: Neste exemplo, o leite em cada balde está distribuído da seguinte forma durante a sequência de despejos:
Estado inicial: 3 4 5
Despejar 1->2: 0 7 5
Despejar 2->3: 0 0 12
Despejar 3->1: 10 0 2
Despejar 1->2: 0 10 2
Despejar 2->3: 0 0 12 (Os três últimos estados se repetem em um ciclo...)