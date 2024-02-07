#include <unistd.h>

void ft_putchar(char c){
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

int main(){
    char str[] = {'H' ,'e' ,'l' ,'l' ,'o' ,' ' ,'w' ,'o' ,'r' ,'l' ,'d', '\n'};
    ft_putstr(str);
}