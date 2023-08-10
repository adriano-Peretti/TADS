<?php

    $carro1 = array('modelo' => 'Z3',
                    'marca' => 'BMW',
                    'link' => 'https://quatrorodas.abril.com.br/wp-content/uploads/2020/10/CR_09_10_542-1.jpg?quality=70&strip=info');

    $carro2 = array('modelo' => 'Kucks',
                    'marca' => 'Nissan',
                    'link' => 'https://s2-autoesporte.glbimg.com/3JktpYBiNnZiJpBdYHs79FfFQLc=/329x294:1975x1321/924x0/smart/filters:strip_icc()/i.s3.glbimg.com/v1/AUTH_cf9d035bf26b4646b105bd958f32089d/internal_photos/bs/2021/q/K/ugzyCTRfCcjfcpxgS8HA/61-nissan-kicks-exclusive-30-.jpg');

    $carros = array($carro1,$carro2);

    foreach ($carros as $c) {

        echo "<div style='width: 200px; border: 1px solid;' >";

        echo $c['modelo'] . "<br>";
        echo $c['marca'] . "<br>";
        echo '<img src="' . $c['link'] . '"style="width: 100%;" />';

        echo "</div>";
    }
?>
