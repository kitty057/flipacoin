#pragma warning disable CS8981
using System;
class flipafuckingcoin {
    private static readonly Random rand = new Random();
    public static bool randBool => rand.Next(2) == 0;
    static void Main() {
        if (!randBool) {
            Console.WriteLine("heads");
        }
        else {
            Console.WriteLine("tails");
        }
    }
}
