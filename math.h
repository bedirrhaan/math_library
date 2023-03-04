int factorial(int a) // Takes an integer variable and returns its factorial
{
    int i = 1;
    while (a > 0)
    {
        i *= a;
        a--;
    }
    return (i);
}

int square_area(int edge) // Takes an integer variable. Returns the area of ​​the square and rectangle whose side length is entered.
{
    edge *= 4;
    return (edge);        
}

int triangle_area(int l, int h) // Takes an integer variable. "h" represents base, "l" represents height. Returns the area of ​​the triangle whose properties are entered.
{
    int area;
    area = ((l * h) / 2);
    return area;
}

int gcd(int a, int b) // It takes two integers as parameters. Returns the greatest common divisor of these two integers.
{
    int gcd = 0;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    return (gcd);
}

int lcm(int a, int b) // It takes two integers as parameters. Returns the least common floor of these two integers.
{
    int lcm;
    for (int i = (a * b); i > 0; i--)
    {
        if (i % a == 0 && i % b == 0)
            lcm = i;
    }
    return (lcm);  
}

int average(int a, int b) // Takes two integer values. Takes the average of integers.
{
    int av;
    av = (a * b)/2;
    return (av);
}

int recursive_power(int a, int power) //Takes two integer values. The first value is the number. is the second value power. recursively returns the entered power of a number.
{
    if (power == 0)
        return (1);
    else if (power > 0)
        return (a * recursive_power(a, power - 1));
    else
        return (1);
}

int iterative_power(int a, int power) //Takes two integer values. The first value is the number. is the second value power. iteratively returns the entered power of a number.
{
    if (power == 0)
        return (1);
    else if (power > 0)
    {
        int i = 1;
        while (power > 0)
        {
            i *= a;
            power--;
        }
        return (i);
    }
    else
        return (1);
}

int prime_number(int a) // Takes an integer value. Returns 1 if the integer value is a prime number. if not it returns 0.
{
    if (a < 2)
        return (0);
    else
    {
        int i = 2;
        while (a % i == 0)
        {
            return (0);
        }
        return (1);
    }
}

int absolute_value(int a) // Takes one integer value. Returns the distance from zero of the entered value.
{
    if (a > 0)
        return (a);
    else if (a < 0)
        return (-a);
    else
        return (0);
}