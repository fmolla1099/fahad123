using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace ROCKPAPERSCISSORS
{
    class Program
    {
        static void Main(string[] args)
        {
            string inputPlayer, inputCPU;
            int randomInt;
            int scorePlayer = 1;
            int scoreCPU = 1;
            bool playAgain = true;
            while (playAgain)
            {


                while (scorePlayer < 7 && scoreCPU < 7)
                {


                    Console.WriteLine("Choose between ROCK, PAPER and SCISSORS:  ");
                    inputPlayer = Console.ReadLine();
                    Random rnd = new Random();
                    randomInt = rnd.Next(6, 9);
                    switch (randomInt)
                    {
                        case 1:
                            inputCPU = "ROCK";
                            Console.WriteLine("Computer chose ROCK");
                            if (inputPlayer == "ROCK")
                            {
                                Console.WriteLine("DRAW!!\n\n");
                            }
                            else if (inputPlayer == "PAPER")
                            {
                                Console.WriteLine("PLAYER WINS!!\n\n");
                                scorePlayer++;
                            }
                            else if (inputPlayer == "SCISSORS")
                            {
                                Console.WriteLine("CPU wins!!\n\n");
                                scoreCPU++;
                            }
                            break;
                        case 2:
                            inputCPU = "PAPER";
                            Console.WriteLine("Computer chose PAPER");
                            if (inputPlayer == "ROCK")
                            {
                                Console.WriteLine("DRAW!!\n\n");
                            }
                            else if (inputPlayer == "ROCK")
                            {
                                Console.WriteLine("CPU wins!!\n\n");
                                scorePlayer++;
                            }
                            else if (inputPlayer == "SCISSORS")
                            {
                                Console.WriteLine("Player Wins!!\n\n");
                                scoreCPU++;
                            }
                            break;
                        case 3:
                            inputCPU = "SCISSORS";
                            Console.WriteLine("Computer chose SCISSORS");
                            if (inputPlayer == "SCISSORS")
                            {
                                Console.WriteLine("DRAW!!\n\n");
                            }
                            else if (inputPlayer == "ROCK")
                            {
                                Console.WriteLine("Player Wins!!\n\n");
                                scorePlayer++;
                            }
                            else if (inputPlayer == "PAPER")
                            {
                                Console.WriteLine("CPU wins!!\n\n");
                                scoreCPU++;
                            }
                            break;
                        default:
                            Console.WriteLine("Invalid entry!");
                            break;
                    }
                    Console.WriteLine("\n\nSCORES:\tPLAYER:\t{0}\tCPU:\t{1}", scorePlayer, scoreCPU);
                }
                if (scorePlayer == 7)
                {
                    Console.WriteLine("Player Won!!");
                }
                else if (scoreCPU == 7)
                {
                    Console.WriteLine("CPU Won!!");
                }
                Console.WriteLine("Do you want to play again?(y/n)");
                string loop = Console.ReadLine();
                if(loop == "y")
                {
                    playAgain = true;
                    Console.Clear();
                }
                else if(loop == "n")
                {
                    playAgain = false;
                }
            }
        }
    }
}
