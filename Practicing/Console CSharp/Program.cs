using System;

class Test
{
    static void Main()
    {
        int x = 12 * 30;
        Console.WriteLine(x);
        Console.Read();
    }

    static int FeetToInches(int Feet)
    {
        int inches = Feet * 12;
        return inches;
    }
}