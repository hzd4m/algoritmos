# Luan e a Fila do Café

## Técnica Principal

Simulação.

## Habilidades Treinadas

- Entrada e saída em C++
- Manipulação de string
- Laço de repetição por tempo
- Percorrimento com índice
- Troca de caracteres
- Interpretação ad-hoc

## Enunciado

Na UESPI, Luan decidiu organizar a fila do café antes da aula de programação competitiva.

O problema é que a fila virou praticamente um sistema distribuído sem documentação: gente com sono, gente cafeinada, gente defendendo bits/stdc++.h como patrimônio imaterial da computação e alguém no fundo tentando explicar ponteiro usando cuscuz.

Para simplificar a situação, Luan classificou cada pessoa da fila em dois tipos:

- `S` = sonolento
- `C` = cafeinado

### A Regra Social da Fila

A cada minuto, se uma pessoa sonolenta `S` estiver imediatamente na frente de uma pessoa cafeinada `C`, a pessoa cafeinada pede licença com educação acadêmica e passa para frente.

Ou seja, todo par:
```
SC
```

vira:
```
CS
```

Isso acontece durante `t` minutos.

> **Importante:** em um mesmo minuto, uma pessoa só pode participar de uma troca. Portanto, depois que um par troca de lugar, ele não pode trocar novamente naquele mesmo minuto.

## Entrada

A primeira linha contém dois inteiros `n` e `t`:

- `1 <= n <= 50`
- `0 <= t <= 50`

Onde:
- `n` = tamanho da fila
- `t` = quantidade de minutos

A segunda linha contém uma string `fila` de tamanho `n`, formada apenas pelos caracteres `'S'` e `'C'`.

## Saída

Imprima a fila final depois de `t` minutos.

## Exemplos

### Exemplo 1

**Entrada:**
```
3 1
SCC
```

**Saída:**
```
CSC
```

**Explicação:**

Fila inicial: `S C C`

No primeiro minuto, o par das posições 0 e 1 é `S C`. Então troca para `C S C`.

A resposta é: `CSC`

> Atenção: o `S` que foi para o meio não pode trocar de novo no mesmo minuto com o próximo `C`.

### Exemplo 2

**Entrada:**
```
5 2
SCCSC
```

**Saída:**
```
CCSCS
```

**Explicação:**

- Fila inicial: `S C C S C`
- Depois do minuto 1: `C S C C S`
- Depois do minuto 2: `C C S C S`

Resposta: `CCSCS`

### Exemplo 3

**Entrada:**
```
6 3
SSSCCC
```

**Saída:**
```
CSCSCS
```

**Explicação visual:**

- Fila inicial: `S S S C C C`
- Depois de 1 minuto: `S S C S C C`
- Depois de 2 minutos: `S C S C S C`
- Depois de 3 minutos: `C S C S C S`

Resposta: `CSCSCS`

## Ideia da Solução

## Ideia da Solução

Temos uma string representando a fila.

A cada minuto, percorremos a fila da esquerda para a direita.

Quando encontramos:
```
S C
```

fazemos a troca:
```
C S
```

Depois da troca, precisamos pular duas posições.

**Por quê?** Porque as duas pessoas que acabaram de trocar não podem participar de outra troca no mesmo minuto.

## Armadilha Principal

Depois de trocar, o correto é fazer:

```cpp
i += 2;
```

E **não**:

```cpp
i++;
```

Se fizermos apenas `i++`, a mesma pessoa pode trocar duas vezes no mesmo minuto, o que viola a regra do enunciado.

## Pseudocódigo

```
ler n, t
ler fila

repetir t vezes:
    i = 0
    enquanto i < n - 1:
        se fila[i] == 'S' e fila[i + 1] == 'C':
            trocar fila[i] com fila[i + 1]
            i += 2
        senão:
            i++

imprimir fila
```

## Teste de Mesa

**Entrada:**
```
5 2
SCCSC
```

### Minuto 1

Começa: `S C C S C`

- Posições 0 e 1: `S C` → Troca → `C S C S C`
- Pulamos para depois do par
- Agora encontramos no final: `S C` → Troca → `C S C C S`

Depois do minuto 1: `CSCCS`

### Minuto 2

Começa: `C S C C S`

- Posições 1 e 2: `S C` → Troca → `C C S C S`

Depois do minuto 2: `CCSCS`

**Resposta:** `CCSCS`

## Complexidade

Se `n` é o tamanho da fila e `t` é a quantidade de minutos:

- **Tempo:** O(n × t)
- **Memória:** O(1), desconsiderando a string de entrada

Como `n <= 50` e `t <= 50`, essa solução é tranquila.