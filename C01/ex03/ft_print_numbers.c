#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_numbers(){
    int a;
    while(a <= '9'){
        ft_putchar(a);
        a++;
    }
}