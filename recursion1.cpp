#include <iostream>
#include <stack>
#include <queue>
#include <cstring>

#define C   true
#define CPP (!C)

#define newl '\n'
#define tabc '\t'
#define spac ' '

using namespace std;

int factorial(int n)
{
    if(n == 1)
        return 1;

    return n * factorial(n-1);
}

int bunnyEars(int bunnies)
{
    if(bunnies == 0)
        return 0;
    return 2 + bunnyEars(bunnies-1);
}

int fibonacci(int n)
{
    if(n < 2)
        return n;

    return fibonacci(n-1) + fibonacci(n-2);
}

int bunnyEars2(int bunnies)
{
    if(bunnies == 0)
        return 0;
    if(bunnies % 2)
        return (2 + bunnyEars2(bunnies-1));
    else
        return (3 + bunnyEars2(bunnies-1));
}

int triangle(int rows)
{
    if(rows == 0)
        return 0;

    return rows + triangle(rows-1);
}

unsigned int sumDigits(unsigned int n)
{
    if(n == 0)
        return 0;
    
    return ((n%10) + sumDigits(n/10));
}

unsigned int count7(unsigned int n)
{
    if(n == 0)
        return 0;

    if(n%10 == 7)
        return 1+count7(n/10);
    else
        return count7(n/10);
}

unsigned int count8(unsigned int n)
{
    if(n == 0)
        return 0;

    if(n%10 == 8 && (n/10)%10 == 8)
        return 2 + count8(n/10);
    else if(n%10 == 8)
        return 1 + count8(n/10);
    else
        return count8(n/10);
}

unsigned int powerN(int base, int n)
{
    if(n == 1)
        return base;

    return base * powerN(base, n-1);
}

unsigned int countX(const char * str)
{
#if C
    if(*str == '\0')
        return 0;

    if(*str == 'x')
        return 1 + countX(str+1);
    else
        return countX(str+1);
#elif CPP
#endif
}

unsigned int countHi(const char * str)
{
#if C
    if(*str == '\0')
        return 0;

    if( (*str == 'h') && (*(str+1) == 'i'))
        return 1 + countHi(str+2);
    else
        return countHi(str+1);
#elif CPP
#endif
}

const char * changeXY(char * str)
{
#if C
    if(*str == '\0')
        return str;

    if(*str == 'x')
    {
        *str = 'y';
        changeXY(str+1);
    }
    else
        changeXY(str+1);

    return str;
#elif CPP
#endif
}

void changePi(char * str)
{
#if C
    if(*str == '\0')
        return;

    if( (*str == 'p') && (*(str+1) == 'i'))
    {
        char tmp[50];
        strncpy(tmp, str+2, 50);

        *str = '3';
        *(str+1) = '.';
        *(str+2) = '1';
        *(str+3) = '4';
        strncpy(str+4, tmp, 50);

        changePi(str+4);
    }
    else
        changePi(str+1);
#elif CPP
#endif
}

void noX(char * str)
{
#if C
    if(*str == '\0')
        return;

    if(*str == 'x')
    {
        char tmp[50];
        strncpy(tmp, str+1, 50);
        strncpy(str, tmp, 50);
        noX(str);
    }
    else
        noX(str+1);
#elif CPP
#endif
}

int main()
{
    //
}
