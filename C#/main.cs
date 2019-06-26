using System;
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
			//int count = IslandMap.Count;
			List<string> KeyList = new List<string>(IslandMap.Keys);

			string a = KeyList[System.Random(0, KeyList.Count)];

			Console.WriteLine(a);

			foreach (string key in KeyList)
			{
				IslandMap [key] -= 1;
				Console.WriteLine(key + " " + IslandMap[key]);
			}
			foreach (KeyValuePair<string, int> data in IslandMap)
			{
				Console.WriteLine(data.Key + ":" + data.Value);
			}

			//Console.Read();
		}
	}
}


