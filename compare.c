
int main(void)
{

    int x = get_int("What's the number for x? ");
    int y = get_int("What's the number for y? ");

    if( x < y)
    {
        printf("x is smaller then y");
    }
    else if(x > y)
    {
        printf("x is bigger then y");
    }
    else 
    {
        printf("x is equal to y");
    }


}