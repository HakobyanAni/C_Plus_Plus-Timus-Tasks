﻿#include <iostream>
#include <algorithm>

// 1876. Centipede's Morning

// A centipede has 40 left feet and 40 right feet. It keeps a left slippers and b right slippers under its bed. Every morning the centipede 
// puts on the slippers. It pokes its first left foot under the bed and puts on a random slipper, doing it in one second. If the slipper
// is left, the centipede passes to shoeing the second left foot. Otherwise, it takes off the slipper and puts it on any unshod right foot, 
// spending one more second, so that it takes two seconds altogether to put on such a slipper. If there are no unshod right feet, the centipede
// throws the slipper to a corner of the room, also in one second, so that two seconds are spent altogether for this slipper. The process 
// is continued until all the left feet are in left slippers. Then the centipede starts shoeing its right feet until all of them are shod.
// Today the centipede has got out of bed on the wrong side, so it is preparing for the worst.How many seconds will it need for shoeing ?

// Input
// The only line contains the integers a and b(40 ≤ a, b ≤ 100).

// Output
// Output the number of seconds the centipede will need for shoeing in the worst case.

int main()
{
	int left, right;
	std::cin >> left >> right;
	
	int k = 2 * right + 40;
	int l = 2 * (left - 40) + 78 + 40 + 1;
	
	std::cout << std::max(k, l);
}