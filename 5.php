<?php

function minmax($x) 
{
    sort($x);
    $y=count($x);
    $lala[]=$x[0];
    $lala[]=$x[$y-1];
    echo "[";
    for($i=0;$i<2;$i++)
    echo $lala[$i],",";
    echo "]";
}
    $data=array("h","g","a","b","d","f");
    minmax($data);
?>