<?php
/**
 * Solution to hackerrank challenge https://www.hackerrank.com/challenges/jesse-and-cookies
 *
 * @param $k int Minimum required sweetness
 * @param $cookies array The array of cookies
 */
function cookies(int $k, array $cookies): int
{
    $heap = new SplMinHeap();

    foreach ($cookies as $cookie) {
        $heap->insert($cookie);
    }

    $i = 0;
    while ($heap->top() < $k) {
        if ($heap->count() < 2) {
            return -1;
        }

        $heap->insert($heap->extract() + ($heap->extract() * 2));

        $i++;
    }

    return $i;
}
