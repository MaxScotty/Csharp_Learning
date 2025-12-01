using System;

namespace Arrays_more_
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[,] myArray =   
            {
                {2, 5, 7, 9, 7},
                {6, 1, 57, 9, 13},
                {50, 8, 98, 12, 87},
                {987, 19, 49, 917, 1}
            }; //[строка, колонка]

            //Console.WriteLine(myArray.Rank); // сколько измерений содержит массив

            //myArray.GetLength(0); //сколько элеметов в массиве (в нашем случае, в первом)
        }
    }
}
