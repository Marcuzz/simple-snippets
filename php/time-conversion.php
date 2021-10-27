<?php

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

/**
 * Convert AM/PM to military time
 */
function timeConversion(string $s): string
{
    if ($s[8] === 'A') {
        if ($s[0] === '1' && $s[1] === '2') {
            $s[0] = '0';
            $s[1] = '0';
        }

        return substr($s, 0, 8);
    }

    $time = explode(':', $s);

    $time[0] = ((int)$time[0] % 12) + 12;

    $s = str_pad(implode(':', $time), 10, '0', STR_PAD_LEFT);

    return substr($s, 0, 8);
}
