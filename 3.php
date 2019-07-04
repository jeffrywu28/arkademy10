<?php

function myCountChar( $string, $char ) {
    $count=0;
   	$j=0;
    $jumkar=0;
	while (isset($string[$j]))
	{
		if($string[$j] != ' ') 
		$jumkar++;
		$j++;
	}

    for($i=0; $i<$jumkar;$i++){
        if($string[$i] == $char){
            $count++;
        } 
    }
    print($count);
}
myCountChar("bootcamp","o");
print "<br>";
myCountChar("arkademy","k");
?>