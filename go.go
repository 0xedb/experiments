package main

import (
	"fmt"
	"math"
)

func main() {
	fmt.Println("one")
	fmt.Println(math.Abs(-239393))
	fmt.Println(Adder(220, 23))
}

// Adder adds 2 numbers
func Adder(one, two int) int {
	return one + two
}
