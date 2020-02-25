package main

import (
	"fmt"
	"math"
)

func main() {
	fmt.Println("one")
	fmt.Println(math.Abs(-239393))
	fmt.Println(Adder(220, 23))
	fmt.Println(AddSub(39, 10))
}

// Adder adds 2 numbers
func Adder(one, two int) int {
	return one + two
}

// AddSub adds and subtracts 2 numbers
// and returns the result of both operations
func AddSub(one, two int) (int, int) {
	return one + two, one - two
}
