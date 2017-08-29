<?php
function quickSort($arr){
    if(count($arr) > 1){
        $k = $arr[0];
        $x = array();
        $y = array();
        $size = count($arr);
        for($i = 1; $i < $size ;$i++){
            if($arr[$i] <= $k){
                $x[] = $arr[$i];
            }else{
                $y[] = $arr[$i];
            }
        }
        $x = quickSort($x);
        $y = quickSort($y);
        return array_merge($x, array($k), $y);
    }else{
        return $arr;
    }
}

$arr = array(0,4,3,5,7,2,9,1,6);
$res = quickSort($arr);
print_r($res);
exit;