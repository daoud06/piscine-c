#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print(int i, int j, int k){
    ft_putchar(i);
    ft_putchar(j);
    ft_putchar(k);
    ft_putchar(',');
    ft_putchar(' ');
}


    void ft_print_comb(){
        int i = '0';
        int j = '1';
        int k = '2';
        while(i < '7'){
            while(j < '8') {
                while(k < '9'){
                    ft_print(i,j,k);
                    k++;
                }
                k = j++ + 1;
            }
            j = i++;
        }
    }