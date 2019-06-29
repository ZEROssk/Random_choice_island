using System;
using System.Linq;
using System.Collections.Generic;

namespace RandomIsland
{
	class Program
	{
		static void Main(string[] args)
		{
			var IslandMap = new Dictionary<string, int>()
			{
				{"屋久島", 6},
				{"軍艦島", 6},
				{"種子島", 6},
				{"佐渡島", 6},
				{"小豆島", 6}
			};

			Random rand = new Random();
			var data = IslandMap.ElementAt(rand.Next(0, IslandMap.Count));

			Console.WriteLine(data.Key +" "+ data.Value);
		}
		//Console.Read();
	}
}

