<?php

    function calcFatorial(int $n) {
        $fat = 1;
        for ($i=$n; $i > 1; $i--) {
            $fat *= $i;
        }
        return $fat;
    }

    for ($i=5; $i <= 12; $i++) {
        echo $i . "! = " . calcFatorial($i) . "<br>";
    }
?>
