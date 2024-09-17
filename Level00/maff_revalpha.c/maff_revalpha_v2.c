int main(void)
{
    char letter;
    int i;

    i = 0;
    letter='z';
    while(letter>='a'){
        if(i%2==0)
            letter -= 32;
        write(1, &letter, 1);
        if(i%2 == 0)
            letter += 32;
        i++;
        letter --;
    }
    write(1, "\n", 1);
    return (0);
}