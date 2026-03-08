#include<unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 7;
    char c ;

    while(i>=0)
    {


        c = ((octet >> i) & 1) + 48;
        write(1, &c,1);
        i--;
    }

}


int main()
{
    print_bits(2);


    return 0;
}