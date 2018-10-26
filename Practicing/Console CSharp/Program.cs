using System;

class Test
{
    public class Point
    {
        public int x;
        public void print()
        {
            Console.WriteLine(x);
        }
    }

    static void Main()
    {
        int[,,] temp =
        {
            {{1 },{2 },{3 } },
            {{1 },{2 },{3 } }
        };

        Console.WriteLine(temp.GetLength(1));
        Console.ReadKey();
    }
}