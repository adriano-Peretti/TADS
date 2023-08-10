<?php

    function imprime(string $p){
        echo $p . '<br>';
    }

    function subtracao(int $v1, int $v2) : int {
        return $v1 - $v2;
    }

    imprime("valor a ser impresso!");
    imprime("novo valor!");
    imprime("novamente");


    imprime(subtracao(4,2));
?>
