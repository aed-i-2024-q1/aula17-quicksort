## Aula 17 - Quicksort

Implementação do algoritmo de ordenação Quicksort.

* no arquivo `partition.c` é possível selecionar o algoritmo de particionamento, setando a constante:
  * `USE_HOARE = true`: particionamento de Hoare
  * `USE_HOARE = false`: particionamento de Lomuto
* no arquivo `quicksort.c` é possível ativar ou desativar aleatorização no algoritmo, setando a constante:
  * `RANDOMIZE = true`: aleatoriza o array de entrada
  * `RANDOMIZE = false`: não aleatoriza o array de entrada
