package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {
	island := map[string]int{
		"小豆島": 6,
		"屋久島": 6,
		"種子島": 6,
		"軍艦島": 6,
		"佐渡島": 6,
	}

	rand.Seed(time.Now().UnixNano())

	fmt.Println("Please push the any key")

	for {
		if (len(island) == 0) {
			fmt.Println("お前の席ねぇから!!!!!!")
			break
		} else {
			fmt.Scanln()
			val := choice(island)

			fmt.Println(val, "に座りましょう", "空き", island[val])

			island[val] -= 1

			if (island[val] == 0) {
				delete(island, val)
			}
		}
	}
}

func choice(m map[string]int) string {
	l := len(m)
	i := 0

	rand.Seed(time.Now().UnixNano())
	index := rand.Intn(l)

	ans := ""
	for k, _ := range m {
		if index == i {
			ans = k
			break
		} else {
			i++
		}
	}
	return ans
}

