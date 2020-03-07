package main

import (
	"fmt"
)

type Node struct {
	data int
	next *Node
}

func cleanup() {
	r := recover();
	if r != nil {
		fmt.Println("recovered from ", r)
	}
}

func main() {
	var(
		many = "many"
		atom = 'a'
		one = 1
		two = 2.0
		falsy = false
		truthy = true
	)
	defer cleanup()
	a := [...]int{1, 3}
	fmt.Println(a[49])
	panic("good")
	fmt.Printf("%v\n", many)
	fmt.Printf("%v\n", atom)
	fmt.Printf("%v\n", one)
	fmt.Printf("%v\n", two)
	fmt.Printf("%v\n", falsy)
	fmt.Printf("%v\n", truthy) 
	falsy, truthy = truthy, falsy
	fmt.Printf("%v\n", falsy)
	fmt.Printf("%v\n", truthy) 
	nn := new(Node)
	fmt.Printf("%v\n", nn)
	ww := make([]int,3)
	fmt.Print(ww[0])
}
