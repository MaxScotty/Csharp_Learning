using System;

namespace Arrays_more_
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Random random = new Random();

            // трёхмерный массив (прямоугольный и зубчатый)
            int[,,] myArray = new int[4,3,5]; // (z, y, x)

            for (int i = 0; i < myArray.GetLength(0); i++)
            {
                for (int j = 0; j < myArray.GetLength(1); j++)
                {
                    for (int k = 0; k < myArray.GetLength(2); k++)
                    {
                        myArray[i, j, k] = random.Next(100);
                    }
                }
            }

            for (int i = 0; i <= myArray.GetLength(0); i++)
            {
                Console.WriteLine("Page №" + (i + 1));

                for (int j = 0;j < myArray.GetLength(1);j++)
                {
                    for(int k = 0;k < myArray.GetLength(2);k++)
                    {
                        Console.WriteLine(myArray[i, j, k] + " ");
                    }
                    Console.WriteLine();
                }
                Console.WriteLine("=====================================");
            }
         


            /*int[][] myArray = new int [5][]; // объявление двумерного зубчатого массива
            myArray[0] = new int[5];
            myArray[1] = new int[3];
            myArray[2] = new int[10];
            myArray[3] = new int[8];
            myArray[4] = new int[1];

            Random random = new Random();

            for (int i = 0; i < myArray.Length; i++)
            {
                for (int j = 0; j < myArray[i].Length; j++)
                {
                    myArray[i][j] = random.Next(100);
                }
            }

            for (int i = 0;i < myArray.Length; i++)
            {
                for (int j = 0;j < myArray[i].Length; j++)
                {
                    Console.Write(myArray[i][j] + "\t");
                }
                Console.WriteLine();
            }
            int[,] myArray = new int[10, 6];
            Random random = new Random(); //рандомайзер

            for (int i = 0; i < myArray.GetLength(0); i++)
            {
                for (int j = 0; j < myArray.GetLength(1); j++)
                {

                }
            }

            for (int i = 0; i < myArray.GetLength(0); i++)
            {
                for(int j = 0; j < myArray.GetLength(1); j++)
                {
                    Console.WriteLine(myArray[i, j] + "\t");
                }
            }
            Console.WriteLine();
           
            //Console.WriteLine(myArray.Rank); // сколько измерений содержит массив

            //myArray.GetLength(0); //сколько элеметов в массиве (в нашем случае, в первом)*/


        }
    }
}
