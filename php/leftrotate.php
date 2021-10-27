<?php

/*
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */

function rotateLeft(int $d, array $arr): array
{
    for ($i = 0; $i < $d; $i++) {
        $val = $arr[$i];
        unset($arr[$i]);
        $arr[] = $val;
    }

    return $arr;
}
