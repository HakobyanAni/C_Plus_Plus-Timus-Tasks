﻿#include <iostream>
#include <vector>
#include <algorithm>

// 1910. Titan Ruins. Hidden Entrance

// Soren and Alba were famous and powerful wizards.They had been the founders of a magic guild that had united wizards of 
// the Northern Territories and given them freedom and independence from the Southern Empire.Despite their venerable age, 
// the friends still took an active part in all important events.When explorers of the Aspen Gorges found the remains of structures 
// built by ancient Titans, who had created the world, Soren and Alba were among the first wizards to arrive to the place.
// They knew that Titans had been the most powerful wizards ever, and almost any study of their traces would give a strong impulse to 
// the development of modern magic and would allow to understand the nature of magic on the whole.
// When Soren and Alba approached the Titan Ruins, they saw a blank wall standing out only a little bit against a rock.
// The wall was divided into small identical sections.
// `Where's the entrance ? ' Soren asked.
// `It's hidden, I suppose, ' Alba said. `Did you think that Titans would open the gate for you? They were always very serious about
// their safety. But I'm sure there's a real door somewhere among these sections. As far as I remember, all Titans' structures that 
// we know have a door, and its width is exactly three such sections.'
// `That's good, but how can we find it ? The wall is long, and the spell for dispersing such illusions requires much magic power.
// We can't apply the spell to the whole wall.'
// `Yes, the Masking Spell affects the whole wall, but its force is nonuniform.I'm almost sure the spell is strongest exactly where 
// the door is hidden. I have just activated the Magic Field Scanning Spell, and very soon we'll know the force of the field acting on 
// each section.We'll only have to choose three consecutive sections with maximum total force of the field and apply the Dispersal Spell 
// to these sections.'

// Input
// The first line contains the number n of sections in the wall(3 ≤ n ≤ 1000).In the second line you are given n positive integers ai,
// which are the forces of the magic field acting on each section(1 ≤ ai ≤ 106).

// Output
// Output two integers separated with a space.They should be the maximum total force of the field acting on three consecutive sections
// of the wall and the number of the middle section in this segment.It is guaranteed that there is only one answer.


int main()
{
	int n;
	std::cin >> n;
	std::vector<int> V(n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> V[i];
	}
	int sum = 0;
	int max = 0;
	std::vector<int> Sum;
	for (int i = 0; i < n - 2; ++i)
	{
		sum = V[i] + V[i + 1] + V[i + 2];
		if (sum > max)
			max = sum;
	}
	std::cout << max << " ";
	for (int i = 0; i < n - 2; ++i)
	{
		if ((V[i] + V[i + 1] + V[i + 2]) == max)
		{
			std::cout << i + 2;
			break;
		}
	}
}