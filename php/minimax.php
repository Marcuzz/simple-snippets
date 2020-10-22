<?php

/**
 * Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers
 *
 * @param $ar
 */
function miniMaxSum($ar)
{
    $min = PHP_INT_MAX;
    $max = PHP_INT_MIN;

    for ($i = 0; $i < count($ar); $i++) {
        $value = array_sum(array_diff($ar, [$ar[$i]]));

        if ($value > $max) {
            $max = $value;
        }

        if ($value < $min) {
            $min = $value;
        }
    }

    echo "$min $max";
}