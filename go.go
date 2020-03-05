package main

import (
	"fmt"
)

func main() {
	var(
		many = "many"
		atom = 'a'
		one = 1
		two = 2.0
		falsy = false
		truthy = true
	)
	fmt.Printf("%v\n", many)
	fmt.Printf("%v\n", atom)
	fmt.Printf("%v\n", one)
	fmt.Printf("%v\n", two)
	fmt.Printf("%v\n", falsy)
	fmt.Printf("%v\n", truthy) 
}
