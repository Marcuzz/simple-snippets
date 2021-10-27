<?php
/**
 * Return an integer representing the number of occurrences of a in the prefix of length n in the infinitely repeating string.
 */
function repeatedString(string $s, int $n): int
{
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
