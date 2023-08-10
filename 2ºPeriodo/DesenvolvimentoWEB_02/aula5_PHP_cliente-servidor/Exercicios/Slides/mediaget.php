<?php
function media($n1,$n2,$n3){
    return($n1+$n2+$n3)/3;
}

$n1 = $_GET['num1'];
$n2 = $_GET['num2'];
$n3 = $_GET['num3'];

echo media($n1,$n2,$n3);

?>
