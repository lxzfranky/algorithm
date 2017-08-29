<?php
function insertSort(&$arr){
    $size = count($arr);
    for($i=1;$i<$size;$i++){
        $tmp = $arr[$i];
        $j = $i-1;
        while ($j>-1 && $tmp < $arr[$i]) {
            $arr[$j+1] = $arr[$j];
            $j--;
        }
        $arr[$j+1]=$tmp;
    }
}

$arr = array(0,4,3,5,7,2,9,1,6);
insertSort($arr);
print_r($arr);