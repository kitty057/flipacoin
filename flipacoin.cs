/*  it just flips a coin
    Copyright (C) 2026, A2

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.*/
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
