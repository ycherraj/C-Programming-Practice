#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	char c;

	i = 7;
	while (i >= 0) // 00000010
	{
		c = ((octet >> i) & 1) + '0'; // استخراج البت وتحويله إلى '0' أو '1'
		write(1, &c, 1);
		i--;
	}
}
