<?php 
function BubbleSort(&$arr){
	$size = count($arr);
	for($i=0;$i<$size;$i++){
		for($j=$i;$j<$size;$j++){
			if($arr[$i] > $arr[$j]){
				$tmp = $arr[$j];
				$arr[$j] = $arr[$i];
				$arr[$i] = $tmp;
			}
		}
	}

	return $arr;
}

$arr = array(0,4,3,5,7,2,9,1,6);
BubbleSort($arr);
print_r($arr);