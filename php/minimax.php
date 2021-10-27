<?php

/**
 * Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers
 */
function miniMaxSum(array $arr): void
{
    $min = PHP_INT_MAX;
    $max = PHP_INT_MIN;

    foreach ($arr as $value) {
        $value = array_sum(array_diff($arr, [$value]));

        if ($value > $max) {
            $max = $value;
        }

        if ($value < $min) {
            $min = $value;
        }
    }

    echo "$min $max";
}
