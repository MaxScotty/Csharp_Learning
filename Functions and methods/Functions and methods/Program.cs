using System;

namespace Functions_and_methods
{

    class Program
    {
        static int Sum(int a, int b)
        { 
            return a + b;
        }

        static void PrintResult(int result)
        {
            Console.WriteLine("Sum result: " + result);
        }

        static void Main(string[] args)
        {
            int a, b, c;

            a = Convert.ToInt32(Console.ReadLine());
            b = Convert.ToInt32(Console.ReadLine());

            c = Sum(a, b);

            PrintResult(c);
        }
    }
}
