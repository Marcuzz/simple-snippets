<?php
/**
 *  return an integer representing the number of occurrences of a in the prefix of length n in the infinitely repeating string.
 *
 * @param $s
 * @param $n
 * @return float|int
 */
function repeatedString($s, $n) {
    $ar = str_split($s);
    $fullTimes = floor($n / count($ar));

    $count = $fullTimes * substr_count($s, 'a');

    for ($i = 0; $i < $n - ($fullTimes * count($ar)); $i++) {;
        if ($ar[$i] === 'a') {
            $count++;
        }
    }

    return $count;
}