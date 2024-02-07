#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putstr(char *str){
    int i;
    i = 0;

    while(str[i]){
        ft_putchar(str[i]);
        i++;
    }
}

int ft_strlen(char *str){
    int j;
    int k;

    j = 0;
    k = 0;

    while(str[j]){
        j++;
        k++;
    }
    return(k);
}

int main(){
    char str[] = {'1', '2', '3', '4', '5'};
    int i;
    i = 0;
    //ft_putstr(str);
    i = ft_strlen(str);
    ft_putchar(i + '0');
}