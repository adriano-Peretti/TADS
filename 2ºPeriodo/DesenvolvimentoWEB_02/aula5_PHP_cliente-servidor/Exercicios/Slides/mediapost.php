<?php
function media($n1,$n2,$n3){
    return($n1+$n2+$n3)/3;
}

$n1 = $_POST['num1'];
$n2 = $_POST['num2'];
$n3 = $_POST['num3'];

echo media($n1,$n2,$n3);

?>
