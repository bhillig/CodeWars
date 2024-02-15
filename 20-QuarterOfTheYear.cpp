// 20 - Quarter of the Year (CodeWars Exercise)

// Given a month as an integer from 1 to 12, return to which quarter of the year it belongs as an integer number.

int quarterOf(int month)
{  
	return ((month - 1) / 3) + 1;
}