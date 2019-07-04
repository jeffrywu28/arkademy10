<?php
header('Content-type: application/json');
$biodata=array(
'name'=>('Jeffry Haryanto Gunawan'),
'address'=>('Perum. Bumi Permata Estate C-5 Tuban'),
'hobbies'=>('Membaca,menulis,bersepeda,bermain musik'),
'is_married'=>false,
'school'=>array('SMKN 1 TUBAN','universitas kristen petra'),
'skills'=>array('programming'=>['jeffry'],'score'=>['7'])
);

$json = json_encode($biodata);
echo $json;
?>